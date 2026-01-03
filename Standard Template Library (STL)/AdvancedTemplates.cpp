// Templates: variadic template and specialization examples
#include <iostream>

// variadic template print
template <typename T>
void print_one(const T &v) { std::cout << v << '\n'; }

template <typename First, typename... Rest>
void print_all(const First &f, const Rest &...r)
{
    std::cout << f << ' ';
    if constexpr (sizeof...(r) > 0)
        print_all(r...);
}

// specialization example
template <typename T>
struct Identity
{
    static T id(T v) { return v; }
};

template <>
struct Identity<const char *>
{
    static std::string id(const char *v) { return std::string(v); }
};

int main()
{
    print_all(1, 2, 3, "end");
    std::cout << '\n';
    std::cout << Identity<int>::id(5) << '\n';
    std::cout << Identity<const char *>::id("hello") << '\n';
    return 0;
}
