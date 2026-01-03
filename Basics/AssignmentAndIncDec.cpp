// Basics: assignment, compound assignment, increment and decrement
#include <iostream>

int main()
{
    int x = 5;
    x += 3; // compound assignment
    std::cout << "x after += 3: " << x << '\n';
    x *= 2;
    std::cout << "x after *= 2: " << x << '\n';
    std::cout << "post-increment: " << x++ << " now " << x << '\n';
    std::cout << "pre-increment: " << ++x << '\n';
    x--;
    std::cout << "after decrement: " << x << '\n';
    return 0;
}
