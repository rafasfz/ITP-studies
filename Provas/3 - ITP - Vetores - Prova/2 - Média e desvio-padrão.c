#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  // Leitra das notas
  float nota[10];
  for (int i = 0; i < 10; i++) scanf("%f", &nota[i]);

  // Calcular média
  float media = 0;
  for (int i = 0; i < 10; i++) media+=nota[i];
  media/=10;

  // Calcular desvio padrão
  float desvio = 0;
  for (int i = 0; i < 10; i++) desvio+=(((nota[i] - media)*(nota[i] - media)) / (10 - 1));
  desvio = sqrt(desvio);

  // Saida
  printf("%.2f %.2f\n", media, desvio);

  
  return 0;
}