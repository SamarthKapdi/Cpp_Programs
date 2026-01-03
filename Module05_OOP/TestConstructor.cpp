#include <cstdio>
class Sum
{
private:
    int a;
    int b;

public:
    Sum()
    {
        printf("This is a Default Constructor \n");
    }
    Sum(int a, int b)
    {
        printf("sum: %d \n", a + b);
    }
    void diplay()
    {
        printf("Hello");
    }
};

int main()
{
    Sum s1;
    Sum s2(5, 25);
    s1.diplay();
    return 0;
}