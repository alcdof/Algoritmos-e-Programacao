#include <stdio.h>

int main(void){

    int i, vetVogais[5];
    char string[100], repetir;    

    do{
        i = 0;
        for (int j = 0; j < 5; j++) {
            vetVogais[j] = 0;
        }

        printf("\nInforme um texto com ate 100 caracteres: ");
        fflush(stdin);
        fgets(string, 100, stdin);

        while(string[i] != '\0'){
            if(string[i] == 'a' || string[i] == 'A'){
                vetVogais[0]++;
            }
            if(string[i] == 'e' || string[i] == 'E'){
                vetVogais[1]++;
            }
            if(string[i] == 'i' || string[i] == 'I'){
                vetVogais[2]++;
            }
            if(string[i] == 'o' || string[i] == 'O'){
                vetVogais[3]++;
            }
            if(string[i] == 'u' || string[i] == 'U'){
                vetVogais[4]++;
            }
            i++;
        }

        printf("\nVOGAL\tQUANTIDADE\n");
        printf("==================\n");
        printf("A/a\t%d\n", vetVogais[0]);
        printf("E/e\t%d\n", vetVogais[1]);
        printf("I/i\t%d\n", vetVogais[2]);
        printf("O/o\t%d\n", vetVogais[3]);
        printf("U/u\t%d\n", vetVogais[4]);

    printf("\nDeseja repetir o programa (S/s)? ");
    fflush(stdin);
    scanf(" %c", &repetir);

    }while(repetir == 's' || repetir == 'S');

    return 0;
}