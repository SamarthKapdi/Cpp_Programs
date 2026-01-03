// STL Algorithms: sort and binary_search
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {5, 2, 8, 1, 3};
    std::sort(v.begin(), v.end());
    for (int x : v)
        std::cout << x << ' ';
    std::cout << '\n';
    bool found = std::binary_search(v.begin(), v.end(), 3);
    std::cout << "found 3: " << std::boolalpha << found << '\n';
    return 0;
}
