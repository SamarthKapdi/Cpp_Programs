// Atomics and memory-ordering example (C++11+)
#include <atomic>
#include <thread>
#include <iostream>

std::atomic<int> counter{0};

void inc_relaxed(int n)
{
    for (int i = 0; i < n; ++i)
        counter.fetch_add(1, std::memory_order_relaxed);
}

int main()
{
    std::thread t1(inc_relaxed, 100000);
    std::thread t2(inc_relaxed, 100000);
    t1.join();
    t2.join();
    std::cout << "counter=" << counter.load(std::memory_order_relaxed) << '\n';
    return 0;
}
