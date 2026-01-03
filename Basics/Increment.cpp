#include<cstdio>
int main()
{
    int a = 1;
    printf("a = %d \n", a++ + ++a + --a + a++ - --a);
    // 1 + 3 + 2 + 2 - 2
    return 0;
}