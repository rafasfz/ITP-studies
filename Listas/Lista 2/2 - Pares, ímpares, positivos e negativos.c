#include <stdio.h>
#include <stdlib.h>

int main() {
  int pares = 0,
  impares = 0,
  positivos = 0,
  negativos = 0,
  num[5];

  for (int i = 0; i < 5; i++) {
    scanf("%d", &num[i]);
  }

  for(int i = 0; i < 5; i++) {
    if(num[i] % 2 == 0) pares++;
    if(num[i] % 2 == 1 || num[i] % 2 == -1) impares++;
    if(num[i] > 0) positivos++;
    if(num[i] < 0) negativos++;
  }

  printf("%d valores pares\n", pares);
  printf("%d valores impares\n", impares);
  printf("%d valores positivos\n", positivos);
  printf("%d valores negativos\n", negativos);

  return 0;
}