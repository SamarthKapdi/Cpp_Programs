// Basics: arithmetic, relational and logical operators
#include <iostream>

int main()
{
    int a = 10, b = 3;
    std::cout << "a+b=" << (a + b) << " a-b=" << (a - b) << " a*b=" << (a * b) << '\n';
    std::cout << "a/b=" << (a / b) << " a%b=" << (a % b) << '\n';
    std::cout << std::boolalpha;
    std::cout << "a>b: " << (a > b) << " a==b: " << (a == b) << '\n';
    std::cout << "(a>5) && (b<5): " << ((a > 5) && (b < 5)) << '\n';
    return 0;
}
