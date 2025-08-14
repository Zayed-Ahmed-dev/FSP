#include <stdio.h>

int main(){
    FILE *f = fopen("data1.txt", "w+");
    fputs("WELCOME TO THE CLASS",f);
    fseek(f, 4,SEEK_SET);
    printf("%ld \n", ftell(f));
    char ch = fgetc(f);
    printf("character at 4: %c", ch);
    fclose(f);
    return 0;
}
