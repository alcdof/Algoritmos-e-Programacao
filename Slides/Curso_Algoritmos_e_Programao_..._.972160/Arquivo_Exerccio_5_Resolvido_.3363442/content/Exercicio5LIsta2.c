/*5) Ler um número que indica a quantidade de ímpares (iniciando em 1)
 que deve ser mostrada. O valor informado para a quantidade deve ser
 maior que 0. Validar a entrada.*/

 #include <stdio.h>

 int main(void)
 {
     int num, i, contImpar;

     do //Valida a entrada
     {
         printf("Informe um numero: ");
         scanf("%d", &num);

         if(num<=0)
         {
             printf("Valor invalido\n");
         }
     }while(num<=0);

     i=1;
     contImpar=0;

     do
     {
         printf("%d\t", i);
         contImpar++;
         i = i + 2;
     }while(contImpar<num);

     return 0;
 }
