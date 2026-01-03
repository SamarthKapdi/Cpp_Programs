// Ranges example (C++20) — use views to filter and transform
#include <ranges>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto even = v | std::views::filter([](int n)
                                       { return n % 2 == 0; }) |
                std::views::transform([](int n)
                                      { return n * n; });
    std::cout << "squares of even numbers:";
    for (int x : even)
        std::cout << ' ' << x;
    std::cout << '\n';
    return 0;
}
