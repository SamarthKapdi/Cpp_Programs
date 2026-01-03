// Simple multithreading examples: mutex and condition_variable
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

std::mutex mtx;
std::condition_variable cv;
std::queue<int> q;
bool finished = false;

void producer(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        {
            std::lock_guard<std::mutex> lk(mtx);
            q.push(i);
            std::cout << "produced: " << i << '\n';
        }
        cv.notify_one();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    {
        std::lock_guard<std::mutex> lk(mtx);
        finished = true;
    }
    cv.notify_all();
}

void consumer()
{
    while (true)
    {
        std::unique_lock<std::mutex> lk(mtx);
        cv.wait(lk, []
                { return !q.empty() || finished; });
        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            lk.unlock();
            std::cout << "consumed: " << v << '\n';
            std::this_thread::sleep_for(std::chrono::milliseconds(80));
            lk.lock();
        }
        if (finished)
            break;
    }
}

int main()
{
    std::thread p(producer, 10);
    std::thread c(consumer);
    p.join();
    c.join();
    std::cout << "done\n";
    return 0;
}
