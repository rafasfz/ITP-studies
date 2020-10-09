#include <stdio.h>
#include <stdlib.h>

int main() {
  int cont = 0;

  for (int i=0; i<6; i++) {
    int idade;
    scanf("%d", &idade);
    if(idade > 18) cont++;
  }

  printf("%d", cont);

  return 0;
}