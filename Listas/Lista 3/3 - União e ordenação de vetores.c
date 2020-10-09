#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  int v1[num1], v2[num2], v3[num1 + num2], aux;

  for(int i=0; i<num1; i++) scanf("%d", &v1[i]);

  for(int i=0; i<num2; i++) scanf("%d", &v2[i]);

  for(int i=0; i<(num1 + num2); i++) {
    if(i < num1) v3[i] = v1[i];
    else v3[i] = v2[i - num1];
  }

  for(int i=0; i<(num1 + num2); i++) {
    for(int j=i+1; j<(num1 + num2); j++) {
      if(v3[i] > v3[j]) { 
        aux = v3[i];
        v3[i] = v3[j];
        v3[j] = aux;
      }
    }
    printf("%d ", v3[i]);
  }

  return 0;
}