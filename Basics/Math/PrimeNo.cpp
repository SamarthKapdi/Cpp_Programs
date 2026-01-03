#include <cstdio>
int main()
{
    int a = 5;
    int count = 0;

    for (int i = 2; i < a; i++)
    {
        printf("i = %d  \n", i);
        if (a%i == 0)
        {
            count++;
        }
    }
    printf("count = %d  \n",count);
    if (count>0)
    {
        printf("not prime");
    }
    else
    {
        printf("prime");
    }
    return 0;
}