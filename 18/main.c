#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int impar;
    int max = 100;
    int contador = 0;
    int soma = 0;
    bool flag = true;
    float media;

    do{
    printf("Insira um numero impar e multiplo de 7:\n");
    scanf("%i", &impar);

        if(impar % 2 == 0 || impar % 7 != 0)
            {
                printf("Valor invalido\n");
                flag = false;
                break;
            }
        else
            {
                contador++;
                soma += impar;
            }

        }while(contador < 100);

        if(flag)
        {
            media = (float)soma / contador;
            printf("A media dos numeros e de: %.2f", media);

        }



    return 0;
}

