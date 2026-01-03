#include <cstdio>
void sum(int a, int b)
{
    printf("sum: %d \n", a + b);
}
void multiply(int a, int b)
{
    printf("multiply: %d  \n", a*b);
}
int main()
{
    multiply(5, 10);
    sum(5, 10);
    return 0;
}