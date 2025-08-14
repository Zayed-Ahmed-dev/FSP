#include <stdio.h>

int main(){
    int movie = 1;
    switch(movie << 2+movie){
        default: printf("3 idiots \n");
        case 4: printf("Ghajni \n");
        case 5: printf("Race \n");
        case 8: printf("Salman boi \n");
    }
    return 0;
}