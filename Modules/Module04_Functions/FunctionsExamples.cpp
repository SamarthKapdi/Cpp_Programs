// Module 4: Functions - pass by value, pass by reference, recursion
#include <iostream>

int add_by_value(int a, int b) { return a + b; }
void swap_by_ref(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int factorial(int n) { return (n <= 1) ? 1 : n * factorial(n - 1); }

int main()
{
    int x = 3, y = 4;
    std::cout << "add_by_value(3,4) = " << add_by_value(x, y) << '\n';
    swap_by_ref(x, y);
    std::cout << "After swap: x=" << x << " y=" << y << '\n';
    std::cout << "5! = " << factorial(5) << '\n';
    return 0;
}
