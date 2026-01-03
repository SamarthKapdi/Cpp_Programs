// Basics: namespaces and preprocessor directives
#include <iostream>
#define PI 3.14159

namespace math
{
    double area_circle(double r) { return PI * r * r; }
}

int main()
{
    std::cout << "PI macro: " << PI << '\n';
    std::cout << "area circle radius 2: " << math::area_circle(2.0) << '\n';
    return 0;
}
