#include <stdio.h>
#include <math.h>

int main(void)
{
    int dividendo, divisor, quociente, resto;
    printf("Informe o primeiro numero: ");
    scanf("%d", &dividendo);
    printf("Informe o segundo numero: ");
    scanf("%d", &divisor);

    quociente = trunc(dividendo/divisor);
    resto = dividendo - (divisor * quociente);
    
    printf("Resto da divisao: %d", resto);

    return 0;
}