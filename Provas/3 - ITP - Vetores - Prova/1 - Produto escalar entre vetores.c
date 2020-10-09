#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int tam;
  scanf("%d", &tam);

  int v1[tam], v2[tam];

  // Leitura dos vetores
  for (int i = 0; i < tam; i++) scanf("%d", &v1[i]);
  for (int i = 0; i < tam; i++) scanf("%d", &v2[i]);

  // Calular Produto Escalar
  int prodEscalar = 0;

  for (int i = 0; i < tam; i++) {
    prodEscalar+=(v1[i] * v2[i]);
  }

  // Calcular comprimeto dos vetores
  float comp1 = 0, comp2 = 0;
  for(int i = 0; i < tam; i++) comp1+=(v1[i] * v1[i]);
  comp1 = sqrt(comp1);

  for(int i = 0; i < tam; i++) comp2+=(v2[i] * v2[i]);
  comp2 = sqrt(comp2);
  


  // Saida
  printf("%d %.2f %.2f\n", prodEscalar, comp1, comp2);

  return 0;
}