#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
  int idade = -1;
  float massa = 0;
  int pacientes = 0;
  char diabetes;
  float taxa1, taxa2;
  while (pacientes < 500) {
    printf("Informe sua idade:\n");
    scanf("%i", &idade);
    printf("Informe sua massa:\n");
    scanf("%f", &massa);
    printf("Voce e diabetico? (S/N)\n");
    scanf(" %c", &diabetes);
    if(diabetes != 's' && diabetes != 'S' && diabetes != 'N' && diabetes != 'n')
    {
      printf("Valor invalido\n");
      break;
    }
    taxa1 = (sqrt(0.98 * massa) / (1.08 * idade));
    taxa2 = (sqrt(massa) / (0.93 * idade));
    if(diabetes == 'S' || diabetes == 's')
      {
      printf("Paciente %i: %.2f\n", pacientes + 1, taxa2);
      }
      else if(diabetes == 'N' || diabetes == 'n')
      {
        printf("Paciente %i: %.2f\n", pacientes + 1, taxa1);
      }
      pacientes++;
  }


  return 0;
}
