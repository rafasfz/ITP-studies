#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, digito, soma = 0;
  scanf("%d", &n);
  
  while(n > 0) {
    digito = n % 10;
    soma = soma + digito;
    n = n / 10;
  }

  printf("%d", soma);

  return 0;
}