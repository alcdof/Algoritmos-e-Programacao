#include <stdio.h>

int main (void)
{
    int num, centena, dezena, unidade;

    printf("Informe um numero inteiro com ate tres digitos: ");
    scanf("%d", &num);

    centena = num /100;
    dezena = (num % 100)/10;
    unidade = (num % 100) % 10;

    printf("%d = %d + %d + %d = %d", num, centena, unidade, dezena, (centena + dezena + unidade));
    
    return 0;
}