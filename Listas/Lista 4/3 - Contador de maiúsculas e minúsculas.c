#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  
  char input[30];
  int up=0, low=0;
  gets(input);

  for(int i=0; i<strlen(input); i++) {
    if(islower(input[i])) low++;
    if(isupper(input[i])) up++;
  }

  printf("%d %d", up, low);

  return 0;
}