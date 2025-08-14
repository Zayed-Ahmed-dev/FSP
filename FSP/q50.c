#include <stdio.h>

int arr[5][5];

int main() {
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i==j){
                arr[i][j] = 20;
            } 
            if(i==0 && j==4 || i==4 && j==0 || i==3 && j==1 || i==1 && j==3 || i==2 && j==2) {
                arr[i][j] += 10;
            }
            else{
                arr[i][j] == 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
