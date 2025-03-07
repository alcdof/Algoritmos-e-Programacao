#include <stdio.h>

int main(void){

    int qtd = 1, dez, cinco, um;
    float unitario, total = 0, produto, valorpago, troco, centavos;

    while(qtd != 0){
        printf("Informe a quantidade de um produto: ");
        scanf("%d", &qtd);
        if(qtd != 0){
            printf("Informe o valor unitario do produto: ");
            scanf("%f", &unitario);
            produto = qtd * unitario;
            total = total + produto;
        }
    }
    
    printf("TOTAL DA COMPRA: R$ %.2f\n", total);

    printf("\nInforme o valor pago pelo cliente: ");
    scanf("%f", &valorpago);
    troco = valorpago - total;
    printf("TROCO: R$ %.2f\n", troco);

    dez = troco / 10;
    cinco = ((int)troco % 10) / 5;
    um = ((int)troco % 10) % 5;
    centavos = troco - (int)troco;
    
    printf("%d nota(s) de 10 reais \n%dnota(s) de 5 reais \n%d nota(s) de 1 real \ne %.2f centavo(s)", dez, cinco, um, centavos);

   return 0;
}