#include <stdio.h>

int main(){
    FILE *f = fopen("file.bin", "wb");
    int x = 256;
    fwrite(&x, sizeof(int), 1, f);
    fclose(f);

    f = fopen("file.bin", "rb");
    fread(&x, sizeof(int), 1, f);
    printf("%d", x);
    fclose(f);
    return 0;
}
