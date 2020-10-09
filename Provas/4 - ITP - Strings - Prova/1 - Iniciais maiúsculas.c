#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Escreva um programa que recebe frases de até 60 caracteres e apresenta como saída as letras iniciais de cada palavra em maiúsculas e as demais em minúsculas. 
// Exemplo: Todo homem morre, mas nem todo homem vive. --> Todo Homem Morre, Mas Nem Todo Homem Vive.

int main() {
  
  char frase[60];
  gets(frase);

  for(int i=0; i<strlen(frase); i++) {
    if(frase[i] == ' ') {
      frase[i+1] = toupper(frase[i+1]);
    } else {
      frase[i+1] = tolower(frase[i+1]);
    }
    if(i == 0) frase[0] = toupper(frase[0]);
  }

  for(int i=0; i<strlen(frase); i++) {
    printf("%c", frase[i]);
  }
 
  return 0;
}

