#include <stdio.h>

int main (void)
{
    int prest, prestpagas;
    float valor, valorpago, valorapagar;

    printf("Informe a quantidade total de prestacoes: ");
    scanf("%d", &prest);
    printf("Informe a quantidade de prestacoes pagas: ");
    scanf("%d", &prestpagas);
    printf("Informe o valor (fixo) da prestacao: R$ ");
    scanf("%f", &valor);
    
    valorpago = prestpagas * valor;
    valorapagar = (prest - prestpagas) * valor;

    printf("Valor total ja pago: R$ %.2f \n ", valorpago);
    printf("Saldo devedor: R$ %.2f \n ", valorapagar);

    return 0;
}