// Operators: Bitwise operator examples
#include <iostream>

int main()
{
    unsigned int a = 6; // 110
    unsigned int b = 3; // 011
    std::cout << "a & b = " << (a & b) << '\n';
    std::cout << "a | b = " << (a | b) << '\n';
    std::cout << "a ^ b = " << (a ^ b) << '\n';
    std::cout << "a << 1 = " << (a << 1) << '\n';
    std::cout << "b >> 1 = " << (b >> 1) << '\n';
    return 0;
}
