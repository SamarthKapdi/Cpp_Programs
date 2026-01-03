// Module 3: Control structures - decision and loops
#include <iostream>
int main()
{
    int n = 5;
    if (n % 2 == 0)
        std::cout << n << " is even\n";
    else
        std::cout << n << " is odd\n";

    std::cout << "for loop: ";
    for (int i = 0; i < 5; ++i)
        std::cout << i << ' ';
    std::cout << '\n';

    std::cout << "while loop: ";
    int j = 3;
    while (j--)
        std::cout << j << ' ';
    std::cout << '\n';

    std::cout << "do-while: ";
    int k = 0;
    do
    {
        std::cout << k++ << ' ';
    } while (k < 2);
    std::cout << '\n';
    return 0;
}
