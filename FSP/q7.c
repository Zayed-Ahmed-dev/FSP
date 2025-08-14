#include <stdio.h>

int main(){
    int x=3, y=4, z=4;
    printf("%d", (z>=y>=x?100:200));

    return 0;
}

//z>=y>=x the value z>=y passes 1 as a return and hence gives 1>=x that is false and print 200