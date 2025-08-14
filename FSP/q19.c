#include <stdio.h>

extern enum cricket x;
enum  cricket{
    taylor,
    kallis = 17,
    chandrpaul
};

enum cricket x = taylor | kallis & chandrpaul;

int main(){
    printf("%d", x);
    return 0;
}