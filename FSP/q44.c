#include <stdio.h>

struct Inner
{
    int x; // value 10
};

struct Outer
{
    struct Inner in;
    int y; //value 20
};



int main(){
    struct Outer o = {{10}, 20};
    printf("%d, %d", o.in.x, o.y);
    return 0;
}