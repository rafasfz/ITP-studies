#include <stdio.h>
#include <stdlib.h>

int main() {
  int meses;
  scanf("%d", &meses);

  int coelho[meses][2];
  coelho[0][0] = 1;
  coelho[0][1] = 0;

  for(int i = 0; i < meses; i++){
    if(i != 0) {
      coelho[i][1] = coelho[i-1][0];
      coelho[i][0] = coelho[i-1][0] + coelho[i-1][1];
      
    }
    
  }
  
  printf("%d", coelho[meses-1][0]);
  
  return 0;
}