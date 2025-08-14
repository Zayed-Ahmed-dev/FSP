#include <stdio.h>
#pragma pack(1)
struct A{
    char c;
    int i;
};

int main(){
    struct A a;
    printf("%lu", sizeof(a));
    return 0;
}