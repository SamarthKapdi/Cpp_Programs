// Module 10: Algorithms - simple bubble sort
#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> &a)
{
    for (size_t i = 0; i < a.size(); ++i)
        for (size_t j = 1; j < a.size() - i; ++j)
            if (a[j - 1] > a[j])
                std::swap(a[j - 1], a[j]);
}

int main()
{
    std::vector<int> a{5, 3, 4, 1, 2};
    bubbleSort(a);
    for (int x : a)
        std::cout << x << ' ';
    std::cout << '\n';
}
