#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[] = "Learn C++ Programming";
    printf("Original String:%s \n", str);
    strrev(str);
    printf("Reversed String::%s \n", str);
    return 0;
}