#include <stdio.h>

int main(void){

    int i = 0, j = 0;
    char string[50];

    printf("Informe um texto de ate 50 caracteres: ");
    fgets(string, 50, stdin);

    while(string[i] != '\0'){
        if(string[i] == ' '){
            for(j = 0; j <= i; j++){
                printf("%c", string[j]);
            }
        }
        i++;
    }





    return 0;
}