#include <stdio.h>

int main(){
    int a = 1;
    if(a--){
        printf("Hello");
        --a;
        printf("\n");
        printf("%d", a);
    }else{
        printf("%d", a);
    }
    return 0;
}