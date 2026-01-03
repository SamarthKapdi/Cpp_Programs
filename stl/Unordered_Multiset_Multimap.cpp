// Examples: unordered_set/map, multiset, multimap usage
#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>

int main()
{
    std::unordered_set<int> us = {1, 2, 3, 2};
    std::cout << "unordered_set size: " << us.size() << '\n';

    std::unordered_map<std::string, int> um{{"a", 1}, {"b", 2}};
    std::cout << "um[a]=" << um["a"] << '\n';

    std::multiset<int> ms = {3, 1, 2, 3, 2};
    std::cout << "multiset contents: ";
    for (auto v : ms)
        std::cout << v << " ";
    std::cout << '\n';

    std::multimap<int, std::string> mm;
    mm.emplace(1, "one");
    mm.emplace(1, "uno");
    mm.emplace(2, "two");
    auto range = mm.equal_range(1);
    std::cout << "multimap for key 1: ";
    for (auto it = range.first; it != range.second; ++it)
        std::cout << it->second << " ";
    std::cout << '\n';

    return 0;
}
