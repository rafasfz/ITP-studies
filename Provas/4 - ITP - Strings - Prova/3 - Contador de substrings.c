#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Escreva um programa que recebe duas strings de até 40 caracteres, A e B, e informa quantas vezes a primeira ocorre dentro da segunda. 
// O programa deve ignorar diferenças de maiúsculas e minúsculas.

int main() {

  char s1[40], s2[40];
  gets(s1);
  gets(s2);

  int dentro=0;

  for(int i=0; i<strlen(s2); i++) {
    if(toupper(s2[i]) == toupper(s1[0])) {
      int cont=0;
      for (int j=0; j<strlen(s1); j++) {
        if(toupper(s2[i+j]) == toupper(s1[j])) {
          cont++;
        }
      }
      if(cont == strlen(s1)) {
        dentro++;
      }
    }
  }

  printf("%d", dentro);


  return 0;
}

