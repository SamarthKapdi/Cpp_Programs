// Compound Data Types: references
#include <iostream>

void increment(int &r) { ++r; }

int main()
{
    int a = 5;
    increment(a);
    std::cout << "a after increment = " << a << '\n';
    int &ref = a;
    ref = 10;
    std::cout << "a after ref assignment = " << a << '\n';
    return 0;
}
