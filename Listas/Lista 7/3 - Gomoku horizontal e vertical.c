#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[15][15], venc1=0, venc2=0;

  for(int i = 0; i < 15; i++) {
    for(int j = 0; j <15; j++) {
      scanf("%d", &tab[i][j]);
    }
  }

  for(int i = 0; i < 15; i++) {
    for(int j = 0; j < 15; j++) {
      if(tab[i][j] == 1 && j < 10) {
        int cont = 0;
        for(int k = 0; k < 5; k++) {
          if(tab[i][j+k] == 1) cont++;
        }
        if(cont == 5) venc1 = 1;
      }
      if(tab[i][j] == 2 && j < 10) {
        int cont = 0;
        for(int k = 0; k < 5; k++) {
          if(tab[i][j+k] == 2) cont++;
        }
        if(cont == 5) venc2 = 1;
      }
    }
  }

  for(int i = 0; i < 15; i++) {
    for(int j = 0; j < 15; j++) {
      if(tab[i][j] == 1 && i < 10) {
        int cont = 0;
        for(int k = 0; k < 5; k++) {
          if(tab[i+k][j] == 1) cont++;
        }
        if(cont == 5) venc1 = 1;
      }
      if(tab[i][j] == 2 && i < 10) {
        int cont = 0;
        for(int k = 0; k < 5; k++) {
          if(tab[i+k][j] == 2) cont++;
        }
        if(cont == 5) venc2 = 1;
      }
    }
  }

  if(!venc1 && !venc2) {
    printf("0");
  } else if (venc1) {
    printf("1");
  } else {
    printf("2");
  }

  return 0;
}