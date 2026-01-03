// STL: iterator usage and categories (basic usage)
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3, 4};
    // input iterator style (reading)
    for (auto it = v.begin(); it != v.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';
    // reverse iterator
    for (auto rit = v.rbegin(); rit != v.rend(); ++rit)
        std::cout << *rit << ' ';
    std::cout << '\n';
    return 0;
}
