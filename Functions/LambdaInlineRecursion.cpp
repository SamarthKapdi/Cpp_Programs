// Functions: inline, lambda, recursion
#include <iostream>
#include <functional>

inline int square(int x) { return x * x; }

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    std::cout << "square(5) = " << square(5) << '\n';
    std::cout << "5! = " << factorial(5) << '\n';

    auto add = [](int a, int b)
    { return a + b; };
    std::cout << "lambda add(2,3) = " << add(2, 3) << '\n';

    // std::function example (callback-like)
    std::function<int(int, int)> f = add;
    std::cout << "via std::function: " << f(4, 5) << '\n';
    return 0;
}
