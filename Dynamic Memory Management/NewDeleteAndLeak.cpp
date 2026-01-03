// Dynamic Memory Management: new/delete and simple leak demonstration
#include <iostream>

int main()
{
    int *p = new int(42);
    std::cout << "*p = " << *p << '\n';
    delete p; // correct

    // intentional leak (for demonstration only). Uncomment to see leak in a profiler.
    // int *leak = new int[100];

    return 0;
}
