#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro eh: %d", ((num * 3) + 1) + ((num * 2) - 1));

    return 0;
}