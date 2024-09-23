#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main() {
  int n, contador1, contador2;
  float soma = PI, multi = 1.0;

  while (n < 1) {
    printf("Informe um numero:\n");
    scanf("%i", &n);
    if (n < 1) {
      printf("Valor invalido\n");
      break;
    }

  for (contador1 = 2; contador1 <= n; contador1 += 2) {
    soma += (PI / contador1);
  }
  for (contador2 = 1; contador2 <= n; contador2 += 2) {
    multi *= (contador2 / PI);
  }
  printf("O resultado da soma e: %.2f\n", soma);
  printf("O resultado da multiplicacao e: %.2f\n", multi);
}
  return 0;
}
