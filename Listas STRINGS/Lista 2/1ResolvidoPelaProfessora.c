#include <stdio.h>

int main(void){

    char string[100];
    int vet[25], i, j, cont;

    printf("Informe uma string: ");
    gets(string);

    i = 0;
    j = 0;
    cont = 0;

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

    if(cont > 0){
        vet[j] = cont;
        j++;
    }

    printf("\n");
    
    for(i = 0; i < j; i++){
        printf("%d  ", vet[i]);
    }

    return 0;
}