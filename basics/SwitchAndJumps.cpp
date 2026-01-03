// Control structures: switch-case and jump statements
#include <iostream>

int main()
{
    int n = 2;
    switch (n)
    {
    case 1:
        std::cout << "one\n";
        break;
    case 2:
        std::cout << "two\n";
        break;
    default:
        std::cout << "other\n";
        break;
    }

    std::cout << "loop with break/continue:" << '\n';
    for (int i = 0; i < 5; ++i)
    {
        if (i == 2)
            continue;
        if (i == 4)
            break;
        std::cout << i << ' ';
    }
    std::cout << '\n';

    // goto example (use sparingly)
    int x = 0;
start:
    if (x++ < 2)
        goto start;
    std::cout << "x=" << x << '\n';
    return 0;
}
