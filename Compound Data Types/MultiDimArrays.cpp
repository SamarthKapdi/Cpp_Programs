// Compound Data Types: multi-dimensional arrays
#include <iostream>

int main()
{
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
            std::cout << m[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}
