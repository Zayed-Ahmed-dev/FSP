#include <stdio.h>

int main(){
    int x=25;
    if(!!x){
        printf("%d", !x);
    }else printf("%d", x);
    return 0;
}