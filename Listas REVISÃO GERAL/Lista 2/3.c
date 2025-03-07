#include <stdio.h>

void quadrado(int colunas, int linhas, char simbolo){
    int i, j;

    for(i = 1; i<=linhas; i++){
        for(j = 0; j<=colunas; j++){
            if(j!=colunas){
                printf("%c ", simbolo);
            }
            else{
                printf("\n");
            }
        }
    }
}


int main(void){
    int colunas, linhas;
    char repetir, simbolo;

    do{

        printf("Informe um caractere: ");
        fflush(stdin);
        scanf("%c", &simbolo);
        printf("Informe o numero de colunas: ");
        scanf("%d", &colunas);
        printf("Informe o numero de linhas: ");
        scanf("%d", &linhas);

        quadrado(colunas, linhas, simbolo);

        printf("Deseja repetir a execucao do programa (S/s)? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir == 's' || repetir == 'S');

    return 0;
}