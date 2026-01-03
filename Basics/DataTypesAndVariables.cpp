// Module 1: Data types and variables examples
#include <iostream>
#include <limits>
int main()
{
    int a = 10;
    double pi = 3.14159;
    const char newline = '\n';
    std::cout << "int a = " << a << newline;
    std::cout << "double pi = " << pi << newline;
    std::cout << "max int = " << std::numeric_limits<int>::max() << newline;
    return 0;
}
