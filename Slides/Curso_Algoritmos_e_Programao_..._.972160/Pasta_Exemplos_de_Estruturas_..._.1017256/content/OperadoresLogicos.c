#include <stdio.h>

int main(void)
{
    int a=5, b=3, resultado;

    //Forma Geral
    /*expressão operador lógico expressão

    //Resultado da operação
    0: quando a operação é falsa
    1: quando a operação é verdadeira

    //Operadores lógicos
    &&  operador "e"
    ||  operador "ou"
    !   operador de negação
    */

    printf("Exemplos do uso do operador &&\n");
    //a=5 e b=3
    resultado = a > 2 && b < 5; //V com V resulta V
    printf("%d > 2 && %d < 5\t=\tV com V resulta em = %d\n", a, b, resultado);

    resultado = a > 2 && b < 1; //V com F resulta F
    printf("%d > 2 && %d < 1\t=\tV com F resulta em = %d\n", a, b, resultado);

    resultado = a > 6 && b < 5; //F com V resulta F
    printf("%d > 6 && %d < 5\t=\tF com V resulta em = %d\n", a, b, resultado);

    resultado = a > 6 && b < 1; //F com F resulta F
    printf("%d > 6 && %d < 1\t=\tF com F resulta em = %d\n", a, b, resultado);


    printf("\nExemplos do uso do operador ||\n");
    //a=5 e b=3
    resultado = a > 2 || b < 5; //V com V resulta V
    printf("%d > 2 || %d < 5\t=\tV com V resulta em = %d\n", a, b, resultado);

    resultado = a > 2 || b < 1; //V com F resulta V
    printf("%d > 2 || %d < 1\t=\tV com F resulta em = %d\n", a, b, resultado);

    resultado = a > 6 || b < 5; //F com V resulta V
    printf("%d > 6 || %d < 5\t=\tF com V resulta em = %d\n", a, b, resultado);

    resultado = a > 6 || b < 1; //F com F resulta F
    printf("%d > 6 || %d < 1\t=\tF com F resulta em = %d\n", a, b, resultado);


    printf("\nExemplos do uso do operador !\n");
    //a=5 e b=3
    resultado = !(a > 2 || b < 5); //V com V resulta V mas como tem negação fica F
    printf("!(%d > 2 || %d < 5) =\tV com V resulta em 1 mas com o operador de negacao fica = %d\n", a, b, resultado);

    resultado = !(a > 6); //a expressão é F mas como tem negação fica V
    printf("!(%d > 6) =\t\tF mas com o operador de negacao fica = %d\n", a, resultado);

    return 0;
}
