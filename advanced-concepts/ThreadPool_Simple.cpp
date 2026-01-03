// Simple thread pool example (fixed-size, job queue)
#include <iostream>
#include <vector>
#include <thread>
#include <queue>
#include <functional>
#include <mutex>
#include <condition_variable>

class SimpleThreadPool
{
public:
    SimpleThreadPool(size_t n) : stop(false)
    {
        for (size_t i = 0; i < n; ++i)
            workers.emplace_back([this]
                                 { worker(); });
    }

    ~SimpleThreadPool()
    {
        {
            std::unique_lock<std::mutex> lk(m);
            stop = true;
        }
        cv.notify_all();
        for (auto &t : workers)
            if (t.joinable())
                t.join();
    }

    void submit(std::function<void()> job)
    {
        {
            std::unique_lock<std::mutex> lk(m);
            jobs.push(std::move(job));
        }
        cv.notify_one();
    }

private:
    void worker()
    {
        while (true)
        {
            std::function<void()> job;
            {
                std::unique_lock<std::mutex> lk(m);
                cv.wait(lk, [this]
                        { return stop || !jobs.empty(); });
                if (stop && jobs.empty())
                    return;
                job = std::move(jobs.front());
                jobs.pop();
            }
            job();
        }
    }

    std::vector<std::thread> workers;
    std::queue<std::function<void()>> jobs;
    std::mutex m;
    std::condition_variable cv;
    bool stop;
};

int main()
{
    SimpleThreadPool tp(3);
    for (int i = 0; i < 10; ++i)
    {
        tp.submit([i]
                  { std::cout << "job " << i << " running on thread " << std::this_thread::get_id() << '\n'; });
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "main exiting, pool destructor will join workers" << '\n';
    return 0;
}
