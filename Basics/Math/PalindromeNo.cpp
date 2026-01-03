#include <cstdio>
int main()
{
    int r = 0;
    int temp = 0;
    int no = 123;
    int rnum = 0;

    while (temp > 0)
    {
        r = temp % 10;
        rnum = rnum * 10 + r;
        temp = temp / 10;
    }
    printf("%d \n");
    if("rnum = 0")
    {
        printf("palindrom no");
    
    }
    else{
        printf("not palindrome no");
    
    }
    return 0;
}