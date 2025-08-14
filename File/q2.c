#include <stdio.h>

int main(){
    FILE *f = fopen("log.txt", "a+"); 
    if (!f) {
        perror("File opening failed");
        return 1;
    }

    fprintf(f, "Hello");
    fflush(f);            
    rewind(f);            

    char ch;
    while ((ch = fgetc(f)) != EOF) { 
        printf("%c", ch);
    }

    fclose(f);
    return 0;
}
