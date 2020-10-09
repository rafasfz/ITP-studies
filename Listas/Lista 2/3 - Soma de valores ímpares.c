#include <stdio.h>
#include <stdlib.h>

void consoleLog(const char *__format){
  printf(*__format);
}

int main() {
    consoleLog(12); 
  int n, soma = 0;
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    int x, y, soma=0;
    scanf("%d", &x);
    scanf("%d", &y);
    for(int j=x+1; j<y; j++) {
      if(j % 2 != 0) soma+=j;
    }
    printf("%d\n", soma);
  }

  return 0;
}