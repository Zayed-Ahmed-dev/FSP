#include <stdio.h>
const enum Alpha{
    X,
    Y=5,
    Z
}p=10;
int main(){
    enum Alpha a, b;
    a = X;
    b = Z;
    printf("%d", a+b-p);
    return 0;
}