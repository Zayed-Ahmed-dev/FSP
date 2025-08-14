#include <stdio.h>

void main(){
    int i=3, val;
    val = sizeof f(i) + +f(i=2)+ +f(i-1);
    printf("%d %d", val, i);    
}
int f(int num){
    return num*5;
}