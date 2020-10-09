#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y, soma=0;
  scanf("%d %d", &x, &y);

  if (x+1<y) {
    for(int i=x+1; i<y;i++) printf("%d ", i);
  } else if(y+1<x) {
    for(int i=y+1; i<x;i++) printf("%d ", i);
  } else {
    printf("intervalo vazio");
  }

  return 0;
}