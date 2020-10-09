#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, num3, maior, menor;
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);

  if(num1 == num2 && num2 == num3) {
    printf("Os três números são iguais\n");
  } else {
    if(num1 >= num2 && num1 >= num3) maior = num1;
    if(num2 >= num1 && num2 >= num3) maior = num2;
    if(num3 >= num1 && num3 >= num2) maior = num3;

    if(num1 <= num2 && num1 <= num3) menor = num1;
    if(num2 <= num1 && num2 <= num3) menor = num2;
    if(num3 <= num1 && num3 <= num2) menor = num3;

    printf("O menor número é %d e o maior número é %d\n", menor, maior);
  }

  return 0;
}