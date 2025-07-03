#include <cstdio>
void FindOddEvenNo(int i)
{
    if (i % 2 == 0)
    {
        printf("%d is even no \n", i);
    }
    else
    {
        printf("%d is odd no  \n", i);
    }
}
int main()
{
    int a[] = {5, 2, 4, 6, 7, 9, 11, 15, 17};
    for (int i : a)
    {
        FindOddEvenNo(i);
    }
    return 0;
}