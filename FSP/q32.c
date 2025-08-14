#include <stdio.h>

int f(int n){
    static int r = 0;
    if(n <= 0){
        return 1;
    }
    if(n > 3){
        return f(n-2) + 2;
    }
    return f(n-1) + r;
}

int main(){
    int n = 5;
    int result = f(n);
    printf("f(%d) = %d \n", result);
    return 0;
}