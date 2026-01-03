// std::format and spaceship operator example (C++20)
#include <compare>
#include <iostream>
#include <format>

struct Version
{
    int major, minor, patch;
    auto operator<=>(const Version &o) const = default;
};

int main()
{
    Version a{1, 2, 3}, b{1, 3, 0};
    if (a < b)
        std::cout << "a < b\n";
    std::string s = std::format("Version: {}.{}.{}", a.major, a.minor, a.patch);
    std::cout << s << '\n';
    return 0;
}
