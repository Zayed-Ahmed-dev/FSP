#include <stdio.h>

int main(){
    int x;
    x=fun(5);
    printf("%d", x);
    return 0;
}

int fun(int n){
    int x=1, k;
    if(n == 1) return x;
    for(k=1; k<n; ++k){
        x = x + fun(k) * fun(n-k);
    }
    return x;
}