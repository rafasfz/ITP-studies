#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  scanf("%d", &num);
  if(num > 10) {
    printf("Muitos elementos!\n");
    return 1;
  }

  float a[num], b[num];
  for(int i = 0; i < num; i++) scanf("%f", &a[i]);

  for(int i = 0; i < num; i++) scanf("%f", &b[i]);

  for(int i = 0; i < num; i++) printf("%.2f ", a[i] + b[i]);

  printf("\n");


  return 0;
}