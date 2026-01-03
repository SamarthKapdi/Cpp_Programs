// Module 2: Operators and expressions
#include <iostream>
int main()
{
    int x = 7, y = 3;
    std::cout << "x + y = " << (x + y) << '\n';
    std::cout << "x / y = " << (x / y) << " (integer division)\n";
    std::cout << "x % y = " << (x % y) << '\n';
    bool r = (x > y) && (y != 0);
    std::cout << std::boolalpha << "(x>y) && (y!=0): " << r << '\n';
    return 0;
}
