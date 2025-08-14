#include <stdio.h>

struct A {
    int x;
};

void change(struct A *a){
    a->x = 20;
    printf("Inside function vallue is: %d\n",  a->x);
}

int main(){
    struct A a = {10};
    change(&a);
    printf("Inside the main value is: %d", a.x);
    return 0;
}
