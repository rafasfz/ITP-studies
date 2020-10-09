#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  int c=0, string[50];
  while(1) {
    char carc;
    scanf("%c", &carc);

    if(carc == '@') break;
    if(islower(carc)) {
      string[c] = toupper(carc);
      c++;
    }
    if(isupper(carc)) {
      string[c] = tolower(carc);
      c++;
    }
  }

  for(int i = 0; i<c; i++) {
    printf("%c ", string[i]);
  }

  return 0;
}