#include <stdio.h>
#include <math.h>

int main(void)
{
    float troco, centavos;
    int reais;

    printf("Informe o valor do troco: R$ ");
    scanf("%f", &troco);
    
    reais = trunc(troco);
    centavos = (troco - reais) * 100;
    
    printf("O valor informado eh %d reais e %.0f centavos.", reais, centavos);    

    return 0;
}