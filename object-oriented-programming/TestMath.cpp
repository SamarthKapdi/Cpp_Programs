#include <cstdio>
#include <cmath>
class TestMath
{
public:
    void sum(int a, int b)
    {
        int result = a + b;
        printf("sum:%d \n", result);
    }

    void multiply(int a, int b)
    {
        int result = a * b;
        printf("multiply:%d \n", result);
    }

    void div(float a, float b)
    {

        float result = a / b;
        printf("div:%f \n", result);
    }
};
int main()
{
    TestMath t;
    t.sum(45, 50);
    t.multiply(50, 60);
    t.div(50, 60);
}
