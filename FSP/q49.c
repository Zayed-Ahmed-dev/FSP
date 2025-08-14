#include <stdio.h>

int arr[4][4];

int main() {
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i>j){
                arr[i][j] = i;
            }else {
                arr[i][j] = j;
            }
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
