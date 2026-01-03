// Simple generator coroutine example (C++20 coroutines)
#include <coroutine>
#include <exception>
#include <iostream>

template <typename T>
struct Generator
{
    struct promise_type
    {
        T current;
        std::suspend_always yield_value(T value)
        {
            current = value;
            return {};
        }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        void unhandled_exception() { std::terminate(); }
        Generator get_return_object() { return Generator{std::coroutine_handle<promise_type>::from_promise(*this)}; }
        void return_void() {}
    };

    std::coroutine_handle<promise_type> h;
    Generator(std::coroutine_handle<promise_type> h) : h(h) {}
    ~Generator()
    {
        if (h)
            h.destroy();
    }
    bool next()
    {
        if (!h || h.done())
            return false;
        h.resume();
        return !h.done();
    }
    T value() { return h.promise().current; }
};

Generator<int> counter(int n)
{
    for (int i = 1; i <= n; ++i)
        co_yield i;
}

int main()
{
    auto g = counter(5);
    while (g.next())
        std::cout << "got: " << g.value() << '\n';
    return 0;
}
