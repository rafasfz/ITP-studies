#include <stdio.h>
#include <stdlib.h>

int main()
{
  int rows, columns;
  scanf("%d %d", &rows, &columns);
  int m1[20][20], m2[20][20];

  for (int i = 0; i < rows; i++) {
    for(int j = 0; j < columns; j++) {
      scanf("%d", &m1[i][j]);
    }
  }
  for (int i = 0; i < rows; i++) {
    for(int j = 0; j < columns; j++) {
      scanf("%d", &m2[i][j]);
    }
  }
  for (int i = 0; i < rows; i++) {
    for(int j = 0; j < columns; j++) {
      printf("%d ", m1[i][j] + m2[i][j]);
    }
    printf("\n");
  }

  return 0;
}