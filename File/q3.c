#include <stdio.h>

int main(){
    FILE *f = fopen("new1.txt", "w+");
    fputs("ABC", f);
    rewind(f);
    while(!feof(f)){
        printf("%c", fgetc(f));
    }
    fclose(f);
    return 0;
}