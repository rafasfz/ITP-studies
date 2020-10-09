#include <stdio.h>
#include <stdlib.h>

int main() {

  int num, digito[6], i=0, casa=0;
  scanf("%d", &num);

  while(num > 0) {
    digito[i] = num % 10;
    num = num / 10;
    i++;
    casa++;
  }

  for(i=casa-1;i>=0;i--) {
    printf("%d\n", digito[i]);
  }

  return 0;
}