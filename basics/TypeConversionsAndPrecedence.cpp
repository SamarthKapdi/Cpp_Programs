// Basics: Type conversions, precedence, and associativity
#include <iostream>

int main()
{
    int a = 5;
    int b = 2;
    std::cout << "int division 5/2 = " << (a / b) << '\n';
    std::cout << "double division 5.0/2 = " << (5.0 / b) << '\n';

    // Precedence example
    int x = 2 + 3 * 4;   // 14
    int y = (2 + 3) * 4; // 20
    std::cout << "x=" << x << " y=" << y << '\n';
    return 0;
}
