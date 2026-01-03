// STL: vector and list examples with iterators
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> v = {1, 2, 3};
    for (auto it = v.begin(); it != v.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

    std::list<std::string> names = {"Alice", "Bob"};
    for (auto &s : names)
        std::cout << s << ' ';
    std::cout << '\n';
    return 0;
}
