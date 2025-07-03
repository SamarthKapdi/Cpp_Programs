#include <cstdio>
int main()
{
    int n1 = 45, n2 = 18;
    char opr = '*';
    switch (opr)
    {

    case '+':
        printf("sum = %d", n1 + n2);
        break;
    case '-':
        printf("subtract = %d", n1 - n2);
        break;
    case '*':
        printf("multiply = %d", n1 * n2);
        break;
    case '/':
        printf("div = %d", n1 / n2);
        break;
    }
    return 0;
}