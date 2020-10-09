#include <stdio.h>
#include <stdlib.h>

int main() {

  while (1){
    int num[3];
    char hex[2][3];
    for (int i=0; i<3; i++){
      scanf("%d", &num[i]);
    }

    if(num[0] < 0 || num[1] < 0 || num[2] < 0) break;

    for (int i=0; i<3; i++){
      printf("%.2X", num[i]);
    }
    printf("\n");
  }

  return 0;
}