#include <stdio.h>
#include <stdlib.h>

int main() {

  printf("Entre com os operandos:\n");
  float A, B, V;
  scanf("%f", &A);
  scanf("%f", &B);

  if(A > 0 && B < 0) {
    V = A * B;
    printf("Valor de V=%.1f", V);
  } else if (A < 0) {
    V = A + B;
    printf("Valor de V=%.1f", V);
  } else {
    V = A / B;
    printf("Valor de V=%.1f", V);
  }

  return 0;
}