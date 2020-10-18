#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, matriz[30][30];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(i == j) matriz[i][j] = 1;
      else matriz[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}