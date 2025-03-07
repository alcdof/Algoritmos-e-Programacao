#include <stdio.h>

int main(void){

    int i, j, vet[10], cont;
    char string[50], repetir;


    do{
        cont = 0;
        i = 0;
        j = 0;

        for(i = 0; i <= 10; i++){
            vet[i] = 0;
        }

        printf("Informe uma string de ate 50 caracteres: ");
        fgets(string, 50, stdin);

        while(string[i] != '\0'){
            if(string[i] == ' '){
                cont++;
                
            }
            else{
                if(cont > 0){
                    vet[j] = cont;
                    j++;
                    cont = 0;
                }
                
            }
            i++;
        }

        printf("===VETOR===\n");

        for(i = 0; i < 10; i++){
            printf("%d ", vet[i]);
        }

        printf("\nDeseja repetir o programa (S/s)? ");
        scanf(" %c", &repetir);
        getchar();

    }while(repetir == 'S' || repetir == 's');

    return 0;
}