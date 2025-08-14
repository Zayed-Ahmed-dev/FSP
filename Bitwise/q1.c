#include <stdio.h>

// 2 power in binary is 100 (only contain 1)

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>0 && (n & (n-1)) == 0) //
    printf("%d is a power of 2\n", n);
    else
    printf("%d is NOT a power of 2\n", n);
    return 0;
}