// STL Algorithms: accumulate, transform, partition, lower_bound
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    int sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "sum=" << sum << '\n';

    std::vector<int> out(v.size());
    std::transform(v.begin(), v.end(), out.begin(), [](int x)
                   { return x * x; });
    for (int x : out)
        std::cout << x << ' ';
    std::cout << '\n';

    auto it = std::partition(v.begin(), v.end(), [](int x)
                             { return x % 2 == 0; });
    for (auto i = v.begin(); i != v.end(); ++i)
        std::cout << *i << ' ';
    std::cout << '\n';

    std::sort(v.begin(), v.end());
    auto lb = std::lower_bound(v.begin(), v.end(), 3);
    if (lb != v.end())
        std::cout << "lower_bound for 3 at index " << (lb - v.begin()) << '\n';
    return 0;
}
