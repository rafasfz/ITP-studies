#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tiraEspaco(char txt[], char txtFiltrado[]) {
  int c=0;
    for (int i=0; txt[i] != '\0'; i++) {
      if(txt[i] != ' ') {
        txtFiltrado[c] = txt[i];
        c++;
      }
    }
  txtFiltrado[c] = '\0';
}

int comeco = 0;
int ehPalindromo(char txt[]) {
  char txtFiltrado[100];

  tiraEspaco(txt, txtFiltrado);

  int final;
  for (int i=0; txtFiltrado[i] != '\0'; i++) {
    final = i;
  }

  if(comeco >= final) {
      comeco = 0;
      return 1;
  }
  if (txtFiltrado[comeco] == txtFiltrado[final]) {
    comeco++;
    txtFiltrado[final] = '\0';
    return ehPalindromo(txtFiltrado);
  } else {
    comeco = 0;
    return 0;
  }


}


int main()
{
  char txt[100], txtFunc[100];
  gets(txt);
  
  strcpy(txtFunc, txt);

  txt[strlen(txt)] = '\0';

  if(ehPalindromo(txt)) {
    printf("O texto %s é palíndromo", txtFunc);
  } else {
    printf("O texto %s não é palíndromo", txtFunc);
  }

  return 0;
}