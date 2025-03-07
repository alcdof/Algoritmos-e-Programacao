#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int vet[10], i, j, aux;

    srand(time(NULL));

    printf("\n=== VETOR ORIGINAL ===\n");

    for(i=0; i<10; i++){
        vet[i] = rand() % 100;
        printf("%d\t", vet[i]);
    }

    for(j = 10-1; j>0; j--){
        for(i=0; i<j; i++){
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux; 
            }
        }
    }

    printf("\n=== VETOR ORDENADO ===\n");

    for(i=0; i<10; i++){
        printf("%d\t", vet[i]);
    }
    printf("\n");

    return 0;
}