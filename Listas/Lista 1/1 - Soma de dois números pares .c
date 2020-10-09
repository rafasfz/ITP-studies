#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;

  scanf("%d", &num1);
  scanf("%d", &num2);

  if(num1 % 2 != 0) {
    printf("Não posso somar, pois %d não é par", num1);
    if (num2 % 2 != 0) {
      printf("Não posso somar, pois %d não é par", num2);
    }
  } else if (num2 % 2 != 0) {
    printf("Não posso somar, pois %d não é par", num2);
  } else {
    printf("%d", num1 + num2);
  }

  return 0;
}