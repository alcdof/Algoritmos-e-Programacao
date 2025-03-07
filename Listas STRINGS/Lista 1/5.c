#include <stdio.h>

int main(void){

    int contL, contN, i = 0;
    char string[100], repetir;

    do{
        contL = 0;
        contN = 0;
        i = 0;

        printf("\nInforme um texto de ate 100 caracteres: ");
        fgets(string, 100, stdin);   

        while(string[i] != '\0'){
            if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122)){
                contL++;
            }
            else if(string[i] >= 48 && string[i] <= 57){
                contN++;
            }
            i++;
        }

        printf("\nExistem %d caracteres alfabeticos no texto.", contL);
        printf("\nExistem %d numeros no texto.\n", contN);

        printf("\nDeseja repetir o programa (S/s)? ");
        scanf(" %c", &repetir);
        getchar();

    }while(repetir == 's' || repetir == 'S');

    return 0;
}