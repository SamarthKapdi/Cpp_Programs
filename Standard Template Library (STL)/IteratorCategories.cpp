// Iterator category demos: input, forward, bidirectional, random-access
#include <iostream>
#include <iterator>
#include <vector>
#include <list>

template <class It>
void print_category(It)
{
    using Cat = typename std::iterator_traits<It>::iterator_category;
    if constexpr (std::is_same_v<Cat, std::random_access_iterator_tag>)
        std::cout << "random-access\n";
    else if constexpr (std::is_same_v<Cat, std::bidirectional_iterator_tag>)
        std::cout << "bidirectional\n";
    else if constexpr (std::is_same_v<Cat, std::forward_iterator_tag>)
        std::cout << "forward\n";
    else if constexpr (std::is_same_v<Cat, std::input_iterator_tag>)
        std::cout << "input\n";
    else
        std::cout << "unknown\n";
}

int main()
{
    std::vector<int> v{1, 2, 3};
    std::list<int> l{1, 2, 3};
    std::cout << "vector iterator: ";
    print_category<decltype(v.begin())>(v.begin());
    std::cout << "list iterator: ";
    print_category<decltype(l.begin())>(l.begin());
    std::cout << "istream iterator is input iterator: ";
    print_category<std::istream_iterator<int>>(std::istream_iterator<int>());
    return 0;
}
