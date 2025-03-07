#include <stdio.h>

int main(void){
    int i, j, matriz[10][10];

    printf("\n=== MATRIZ ORIGINAL ===\n");

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            matriz[i][j] = 1;
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n=== MATRIZ ATUAL ===\n");

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(i == j){
                matriz[i][j] = 0;
            }
            if(i + j == 10 - 1){
                matriz[i][j] = 0;
            }
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}