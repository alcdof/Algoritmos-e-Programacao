#include <stdio.h>
int main(void)
{
    float alt, peso;
    char gen;

    printf("informe um genero (F ou f para feminino, M ou m para masculino): ");
    scanf("%c", &gen);


    if (gen == 'm' || gen == 'M'){
        printf("informe sua altura: ");
        scanf("%f", &alt);
        peso = (72.7 * alt) - 58;
        printf("O peso ideal para a sua altura eh: %f kg", peso);
    }
    else if (gen == 'f' || gen == 'F'){
        printf("informe sua altura: ");
        scanf("%f", &alt);
        peso = (62.1 * alt) - 44.7;
        printf("O peso ideal para a sua altura eh: %f kg", peso);
    }

    return 0;
}