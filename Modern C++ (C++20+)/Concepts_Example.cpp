// Concepts example (C++20)
#include <concepts>
#include <iostream>

template <typename T>
concept Incrementable = requires(T a) {
    { ++a } -> std::same_as<T &>;
    { a++ } -> std::same_as<T>;
};

template <Incrementable T>
T add_one(T v) { return ++v; }

int main()
{
    int x = 41;
    std::cout << "add_one(41) = " << add_one(x) << '\n';
    // double doesn't satisfy pre/post-increment returning same types in general
    // but shows how concepts create clearer diagnostics
    return 0;
}
