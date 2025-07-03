#include<cstdio>
int main()
{
    int a = 50;
    int b = 100;
    int c = 0;
    a = b;
    b = c;
    c = b;
    printf("a = %d\n", a);
    printf("c = %d\n",c);
    return 0;
}