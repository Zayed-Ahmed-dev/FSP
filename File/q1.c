#include <stdio.h>

int main() {
    FILE *f = fopen("name.txt", "w+");
    if (!f) {
        perror("File opening failed");
        return 1;
    }

    fprintf(f, "123456789");
    rewind(f);

    char ch;
    while ((ch = fgetc(f)) != EOF)
        printf("%c", ch);

    fclose(f);
    return 0;
}
