 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatrizDe0ALimite(int lin, int col, int *matriz, int lim){
    int i, j;

    srand(time(NULL));

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
             *(matriz + i * col + j) = rand() % (lim + 1);
        }
    }
}

void mostrarMatrizInteira(int lin, int col, int *matriz){
    int i, j;

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            printf("%d  ", *(matriz + i * col + j));
        }
        printf("\n");
    }
}

