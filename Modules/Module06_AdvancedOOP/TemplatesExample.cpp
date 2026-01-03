// Module 6: Templates - function and class templates
#include <iostream>

template <typename T>
T add(T a, T b) { return a + b; }

template <typename T>
class Pair
{
public:
    T first, second;
    Pair(T a, T b) : first(a), second(b) {}
};

int main()
{
    std::cout << "add<int>(2,3) = " << add<int>(2, 3) << '\n';
    Pair<double> p(2.5, 3.5);
    std::cout << "Pair first = " << p.first << '\n';
    return 0;
}
