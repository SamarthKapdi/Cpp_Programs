#include <iostream>
using namespace std;

// Same method in a class with different different parameter is called method overloading

class Test
{
public:
    void add(int a, int b)
    {
        printf("Sum of %d and %d is: %d \n", a, b, a + b);
    }
    void add(int a, int b, int c)
    {
        printf("Sum of %d and %d is: %d \n", a, b, c, a + b + c);
    }
    void add(double a, double b)
    {
        printf("Sum of %lf and %lf is: %lf \n", a, b, a + b);
    }
};
int main()
{
    Test t;

    t.add(5, 10);              // Add two integers
    t.add(1, 2, 3);            // Adds three integers
    t.add(2.652522, 3.754544); // Adds two double-point numbers

    return 0;
}
