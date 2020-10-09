#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int index = 0, c=0;
  char p[100], p2[100];
  scanf("%s", p);
  setbuf(stdin, NULL);
  gets(p2);
  setbuf(stdin, NULL);

  for(int i=0; i<strlen(p2); i++) {
    if(p[0] == p2[i]) {
        index = i;
        for(int j = 0; j < strlen(p); j++) {
          if(p[j] == p2[i + j]) c++;
          else c = 0; 
          if(c == strlen(p)) i = strlen(p2); 

        }
    }
  }
  
  if (c) printf("%d\n", index + 1);
  else printf("0\n");

  return 0;
}