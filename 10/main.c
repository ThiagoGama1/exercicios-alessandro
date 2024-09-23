#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int numero = 1;
    int contador = 0;
    int multiplo = 0;
    int soma = 0;
    float media = 0;
    do{
    printf("Informe o numero limite:\n");
    if(scanf("%i", &numero) != 1)
    {
        printf("Numero invalido");
    }
    }
    while(numero < 1);
    for(contador = 6; contador <= 6 * numero; contador++)
    {
        if(contador % 6 == 0)
        {
            multiplo++;
            soma += contador;
        }
    }
        media = (float)soma / multiplo;
        printf("A media e: %.2f\n", media);

    return 0;
}
