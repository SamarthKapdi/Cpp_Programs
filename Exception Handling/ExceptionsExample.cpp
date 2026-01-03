// Module 11: Exception handling
#include <iostream>
#include <stdexcept>

int safe_div(int a, int b)
{
    if (b == 0)
        throw std::runtime_error("division by zero");
    return a / b;
}

int main()
{
    try
    {
        std::cout << safe_div(10, 2) << '\n';
        std::cout << safe_div(5, 0) << '\n';
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught: " << e.what() << '\n';
    }
    return 0;
}
