#include<cstdio>
int main(){
    int a[] = {1,2,3,4,5};
    for(int i : a)
    { if(i % 2 == 0){
            printf("%d is even no  \n", i);
        }
        else{
            printf("%d is odd no  \n", i);
        }

    }
    return 0;
}