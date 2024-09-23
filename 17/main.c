#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int numeros, menor = INT_MAX;
    printf("Insira os numeros (digite 0 para encerrar):\n");
    do{
    scanf("%i", &numeros);

    if(numeros < 0)
    {
        printf("Valor inválido.");
    }
        else if(numeros == 0)
        {
            continue;
        }
        else{
            if(numeros < menor)
            {
                menor = numeros;
            }

        }
    }while(numeros != 0 && numeros > 0);
    printf("O menor valor é: %i\n", menor);



    return 0;
}
