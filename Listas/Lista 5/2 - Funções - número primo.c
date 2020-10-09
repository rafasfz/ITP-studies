#include <stdio.h>
#include <stdlib.h>

void ehPrimo(int x) {
  int cont=0;
  for (int i = 1; i <= x; i++) {
    if(x % i == 0) cont++;
  }
  if(cont == 2) printf("%d eh primo\n", x);
  else printf("%d nao eh primo\n", x, cont);
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    ehPrimo(x);
  }
  return 0;
}