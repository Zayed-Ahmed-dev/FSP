#include <stdio.h>

int arr[4][4];

int main() {
    int value = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            arr[i][j] = value++;
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
