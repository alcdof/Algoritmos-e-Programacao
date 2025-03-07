#include <stdio.h>

int main(void){

    char a;
    int cont1 = 0, cont2 = 0, cont3 = 0;
    
    while(a != '0'){
        printf("Informe um caractere: ");
        scanf("%c", &a);
        if(a >= 'A' && a <= 'Z'){
            cont1++;
        }
        else if(a >= 'a' && a <= 'z'){
            cont2++;
        }
        else if(a != '0'){
            cont3++;
        }
        fflush(stdin);
        
    }
    
    printf("Foram informadas %d letras maiusculas.\n", cont1);
    printf("Foram informadas %d letras minusculas.\n", cont2);
    printf("Foram informados %d caracteres que nao sao letras.\n", cont3);

    return 0;
}