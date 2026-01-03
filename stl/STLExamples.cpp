// Module 10: STL examples - vector, map, algorithms
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    std::vector<int> v = {3, 1, 4, 1, 5};
    std::sort(v.begin(), v.end());
    std::cout << "sorted:";
    for (int x : v)
        std::cout << ' ' << x;
    std::cout << '\n';

    std::map<std::string, int> m;
    m["one"] = 1;
    m["two"] = 2;
    for (auto &kv : m)
        std::cout << kv.first << ":" << kv.second << '\n';
    return 0;
}
