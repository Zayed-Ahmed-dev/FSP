#include <stdio.h>

enum Color {RED=5, GREEN, BLUE};

int main(){
    enum Color c = GREEN;
    printf("%d", c);
    return 0;
}