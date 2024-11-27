//Conta a quantidade de números pares

#include <stdio.h>

   int main(void)
   {
       int i, cont=0;

       for(i=0; i <= 10; i++)
       {
           if(i%2 == 0)
           {
               printf("%d\n", i);
               cont++;
           }
       }
       printf("\nQuantidade de numeros pares: %d\n", cont);

       return 0;
   }
