// Functions: prototypes, default args, overloading
#include <iostream>

int add(int a, int b); // prototype
int add(int a, int b, int c);

int add(int a, int b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }

int area(int w, int h = 5) { return w * h; }

int main()
{
    std::cout << "add(2,3) = " << add(2, 3) << '\n';
    std::cout << "add(1,2,3) = " << add(1, 2, 3) << '\n';
    std::cout << "area(4) = " << area(4) << " (uses default h=5)\n";
    return 0;
}
