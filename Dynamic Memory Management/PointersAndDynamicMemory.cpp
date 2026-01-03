// Module 8: Pointers and dynamic memory
#include <iostream>

int main()
{
    int x = 10;
    int *p = &x;
    std::cout << "*p = " << *p << '\n';
    int *arr = new int[3]{1, 2, 3};
    std::cout << "arr[1] = " << arr[1] << '\n';
    delete[] arr;
    return 0;
}
