#include <stdio.h>

struct A
{
    int x;
};


int main(){
    struct A arr[2] = {{1}, {2}};
    printf("%d", arr[1].x);
    return 0;
}