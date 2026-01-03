// Tiny test harness (no external deps) — simple unit tests
#include <iostream>
#include <cassert>

int add(int a, int b) { return a + b; }

void test_add()
{
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    std::cout << "test_add passed\n";
}

int main()
{
    test_add();
    std::cout << "all tests passed\n";
    return 0;
}
