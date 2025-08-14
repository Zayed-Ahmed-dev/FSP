#include <stdio.h>

int main(){
    FILE *f = fopen("name.txt", "w+");
    fprintf(f, "123456789");
    char ch;
    while((ch = fgetc(f)) != EOF)
    printf("%c", ch);
    fclose(f);
    return 0;
}