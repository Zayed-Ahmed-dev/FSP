#include <stdio.h>

int main(){
    int i=5,j;
    j=++i + ++i + ++i + ++i; //first two operand 6 and 7 in this case are assigned to the bigger one therefore 
    //  7 + 7 + 8 + 9
    //if decrement then it will be assigned the lowest value
    printf("%d, %d", i,j);
    return 0;
}