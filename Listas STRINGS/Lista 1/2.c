#include <stdio.h>

int main(void){

    int i = 0, j = 0, aux;
    char string[50];

    printf("Informe um texto de ate 50 caracteres: ");
    fgets(string, 50, stdin);

    while(string[i] != '\0'){
        if(string[i] == ' '){
            for(j = aux; j < i; j++){
                printf("%c", string[j]);
            }
            printf("\n");
            aux = i+1;
        }
        i++;
    }

    if(aux < i){
        for(j = aux; j < i; j++){
            printf("%c", string[j]);
        }
        printf("\n");
    }

    return 0;
}