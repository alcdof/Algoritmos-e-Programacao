#include <stdio.h>

int verificaOcorrencia(int vet[], int tamanho, int valor){
    int cont = 0, i = 0;

    for(i = 0; i < tamanho; i++){
        if(vet[i] == valor){
            cont++;
        }
    }

    return cont;
}

int main(void){
    char str[100];
    int vet[100];
    int i = 0, j = 0, k = 0, aux, cont = 0, tamVet;

    for(i = 0; i < 100; i++){
        vet[i] = 0;
    }

    printf("Informe uma string: ");
    fflush(stdin);
    fgets(str, 100, stdin);
    
    while(str[i] != '\0'){
        if(str[i] == '\n'){
            str[i] = '\0';
        }
        i++;
    }
    
    i = 0, j = 0;
    
    while(str[i] != '\0'){
        while(str[i] == '-' && str[i] != '\0'){
            cont++;
            i++;
        }
        if(cont > 0){
            vet[j] = cont;
            j++;
            cont = 0;
        }
        i++;
    }

    printf("\n=== VETOR ===\n");
    for(i = 0; i < j; i++){
        printf("%d  ", vet[i]);
    }
    printf("\n");

    //bubble sort
    for(k = j - 1; k > 0; k--){
        for(i = 0; i < k; i++){
            if(vet[i] > vet[i+1]){
                aux = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = aux;            
            }
        }
    }
    cont = 0;
    printf("\n=== VETOR ORDENADO ===\n");
    for(i = 0; i < j; i++){
        printf("%d  ", vet[i]);
        
        if(i == 0 || vet[i] != vet[i-1]){
            cont++;
        }
    }
    printf("\n");
    
    //matriz
    int mat[cont][2];
    printf("\n\n=== MATRIZ ===\n");
    tamVet = j;

    for(i = 0; i < j; i++){
        if(i == 0 || vet[i] != vet[i-1]){
            mat[i][0] = vet[i];
            printf("%d\t", mat[i][0]);
            mat[i][1] = verificaOcorrencia(vet, j, mat[i][0]);
            printf("%d\n", mat[i][1]);
            k++;
        }
    }
    
    return 0;
}