#include <stdio.h>
#include <stdlib.h>

int main() {

  int c, maior=0, menor=0;
  scanf("%d", &c);
  float investimentos[c];

  for(int i=0;i<c;i++) {
    scanf("%f", &investimentos[i]);
  }

  for(int i=1;i<c;i++) {
    if(investimentos[i-1] < investimentos[i]){
      maior+=1;
    }
  }
  for(int i=1;i<c;i++) {
    if(investimentos[i-1] > investimentos[i]){
      menor+=1;
    }
  }


  if(maior == c-1) {
    printf("%d", 1);
  } else if (menor == c-1){
    printf("%d", -1);
  } else {
    printf("%d", 0);
  }

  return 0;
}