#include <stdio.h>

int main(void)
{
    int a=5, b=3;

    //Forma Geral
    valor1 operador relacional valor2

    //Resultado da compara��o
    0: quando a compara��o � falsa
    1: quando a compara��o � verdadeira

    //Operadores Relacionais
    >  maior que
    >= maior ou igual
    <  menor que
    <= menor ou igual
    == igual a
    != diferente de

    //Exemplos
    printf("%d > %d = %d\n", a, b, a > b);
    printf("%d >= %d = %d\n", a, b, a >= b);
    printf("%d < %d = %d\n", a, b, a < b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n", a, b, a != b);

    return 0;
}
