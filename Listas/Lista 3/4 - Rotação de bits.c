#include <stdio.h>
#include <stdlib.h>

int main() {
  

  int bit[8], rot, anterior, v;
  for (int i = 0; i < 8; i++) {
    scanf("%d", &bit[i]);
  }

  scanf("%d", &rot);

  for(int rota=0; rota<rot; rota++){
    for(int i = 0; i < 8; i++) {
      if( i != 0){
        v = bit[i];
        bit[i] = anterior;
        anterior = v;
      } else {
        anterior = bit[0];
        bit[0] = bit[7];
      }
    }
  }

  for(int i = 0; i < 8; i++) {
    printf("%d ", bit[i]);
  }

  return 0;
}