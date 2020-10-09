#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int c=0;
  char p[100], p2[100] = {'a'};
  scanf("%s", p);
  
  for (int i = strlen(p)-1; i>=0; i--) {
    p2[c] = p[i];
    c++;
  }

  if (strcmp(p, p2) == 0) {
    printf("%s é um palíndromo\n");
  } else {
    printf("%s não é um palíndromo\n", p);
  }

  return 0;
}