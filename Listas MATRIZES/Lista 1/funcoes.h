 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createMatrixFrom0ToLimit(int lin, int col, int *matrix, int lim){
    int i, j;

    srand(time(NULL));

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
             *(matrix + i * col + j) = rand() % (lim + 1);
        }
    }
}

void showMatrixInteger(int lin, int col, int *matrix){
    int i, j;

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            printf("%d  ", *(matrix + i * col + j));
        }
        printf("\n");
    }
}

