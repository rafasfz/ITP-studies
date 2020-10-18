#include <stdio.h>
#include <stdlib.h>

int main()
{
  int rows, columns;
  scanf("%d %d", &rows, &columns);
  int tab[rows][columns];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      scanf("%d", &tab[i][j]);
    }
  }

  int tiroR, tiroC;
  int agua=0, navio=0, afundou=0;
  scanf("%d %d", &tiroR, &tiroC);
  tiroR--;
  tiroC--;
  if(tab[tiroR][tiroC] == 0) agua++;
  else {
    if(tab[tiroR][tiroC + 1] == 1) {
      navio = 1;
    } else if(tab[tiroR][tiroC - 1] == 1) {
      navio = 1;
    } else if(tab[tiroR + 1][tiroC] == 1) {
      navio = 1;
    } else if(tab[tiroR - 1][tiroC] == 1) {
      navio = 1;
    } else {
      afundou = 1;
    }
  }

  if(afundou) {
    printf("3");
  } else if (navio) {
    printf("2");
  } else {
    printf("1");
  }



  return 0;
}