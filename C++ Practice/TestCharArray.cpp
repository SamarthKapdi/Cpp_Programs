#include<iostream>
using namespace std;
int main()
{
    char c[] = {'a','c', 'i', 'o', 's','e','u','z'};
    for(char a : c)
    {
        if(a == 'a'|| a == 'e' || a =='i' || a == 'o' || a == 'u')
        {
            printf("%c \n", a);        
    }
    }

    return 0;
}