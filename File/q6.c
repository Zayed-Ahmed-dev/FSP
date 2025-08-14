#include <stdio.h>

int main(){
    FILE *f = fopen("old.txt", "w");
    fputs("Data", f);
    fclose(f);
    rename("old.txt", "fnew.txt");
    return 0;
}