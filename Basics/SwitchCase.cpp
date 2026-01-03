#include <cstdio>
int main()
{
    int month = 12;
    switch (month)
    {

    case 1:
        printf("jan");
        break;

    case 2:
        printf("feb");
        break;
    case 3:
        printf("mar");
        break;
    case 4:
        printf("apr");
        break;
    case 5:
        printf("may");
        break;
    case 6:
        printf("jun");
        break;
    case 7:
        printf("jul");
        break;
    case 8:
        printf("aug");
        break;
    case 9:
        printf("sept");
        break;
    case 10:
        printf("oct");
        break;
    case 11:
        printf("nov");
        break;
    case 12:
        printf("dec");
        break;

    default:
        printf("this is default");
        break;
    }
    return 0;
}