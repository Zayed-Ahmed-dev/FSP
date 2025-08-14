#include <stdio.h>

int main(){
    int a =2;
    if(a--, --a, a){ // act as an operator
        printf("The dalai Lama");
    }else printf("Jim Rogers");
    return 0;
}