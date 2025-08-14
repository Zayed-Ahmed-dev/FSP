#include <stdio.h>

struct  A
{
    char c;
    int  i;
};


int main(){
    int j;
    struct A a = {'A', 0x12345678};

    unsigned char *ptr = (unsigned char*)&a;

    printf("Size of struct A: %lu bytes\n", sizeof(a));
    printf("Byte-by-Byte memory layout: \n");

    for(j=0; j<sizeof(a); j++){
        printf("Byte %2d: 0x%02X\n", j, ptr[j]);
    }

    return 0;
}