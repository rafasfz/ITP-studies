#include <stdio.h>
#include <stdlib.h>

int main() {
  float m1, c1, m2, c2, xi, yi; // LEMBRAR DE BOTAR UMA CASA DECIMAL QUANDO PRINTAR
  scanf("%f", &m1);
  scanf("%f", &c1);
  scanf("%f", &m2);
  scanf("%f", &c2);

  if(m2 - m1 != 0) {
    if(c1 == c2) {
      printf("Retas colineares!\n");
    } else {
      printf("Retas paralelas!\n");
    }
  } else {
    xi = (c1-c2)/(m2-m1);
    yi = m1 * xi + c1;
    printf("Interseção Pi = (%.1f, %.1f)\n", xi, yi);
  }


  return 0;
}