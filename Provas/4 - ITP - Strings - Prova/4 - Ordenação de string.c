#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Crie um programa que recebe um cadeia de caracteres S de até 40 caracteres, formada apenas por letras minúsculas, e ordena os caracteres de S de acordo com o seguinte critério: 
// a) as vogais devem aparecer antes das consoantes; 
// b) após aplicar o primeiro critério, as vogais e as consoantes devem ser colocadas em ordem alfabética. Exemplo: carro --> aocrr

int main() {
  char s[40], v[40] = {'a'}, c[40] = {'a'};

  gets(s);

  char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

  int vNum=0, cNum=0;

  for(int i=0; i<strlen(s); i++) {
    int isVogal = 0;
    for(int j=0; j<5; j++) {
      if(s[i] == vogais[j]) {
        isVogal = 1;
      }
    }

    if(isVogal) {
      v[vNum] = s[i];
      vNum++;
    } else {
      c[cNum] = s[i];
      cNum++;
    }
  }

  int aux;

  for(int i=0; i<strlen(v); i++) {
    for(int j=0; j<strlen(v); j++) {
      if(v[i] < v[j]) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  }

  for(int i=0; i<strlen(c); i++) {
    for(int j=0; j<strlen(c); j++) {
      if(c[i] < c[j]) {
        aux = c[i];
        c[i] = c[j];
        c[j] = aux;
      }
    }
  }

  for(int i=0; i<strlen(v); i++) {
    printf("%c", v[i]);
  }

  for(int i=0; i<strlen(c); i++) {
    printf("%c", c[i]);
  }

  return 0;
}

