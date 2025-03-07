#include <stdio.h>
#include <math.h>

int main(void)
{
    float premio;
    
    printf("Informe o valor do premio: R$ ");
    scanf("%f", &premio);

    printf("O primeiro ganhador ira receber R$ %.2f\n", (premio * 0.46));
    printf("O segundo ganhador ira receber R$ %.2f\n", (premio * 0.32));
    printf("O terceiro ganhador ira receber R$ %.2f\n", (premio * 0.22));
    
    return 0;
}