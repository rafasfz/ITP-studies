#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Um multiplexador é dispositivo que combina as sinais de múltiplas fontes em um único canal de saída. 
// Crie um programa que simula um multiplexador para dois canais de entrada, A e B. 
// Cada canal de entrada deverá receber uma string de até 40 caracteres. 
// A saída C do multiplexador será os caracteres alternados de A e B. 
// Caso um dos canais de entrada se torne ocioso (sem dados a processar), o canal de saída será ocupado pelos dados do canal remanescente. 
// Exemplo: A=abc; B=defgh; C=adbecfgh

int main() {
  char a[40], b[40], c[80] = {'a'};

  gets(a);
  gets(b);

  int maior, menor, maiorA=0, maiorB=0, iMaisUm=0;

  if(strlen(a) > strlen(b)) {
    maior = strlen(a);
    menor = strlen(b);
    maiorA = 1;
  } else {
    maior = strlen(b);
    menor = strlen(a);
    maiorB = 1;
  }

  for(int i=0; i<maior; i++) {

    if (maiorA) {
      if(i<strlen(b)) {
        c[iMaisUm] = a[i];
        c[iMaisUm+1] = b[i];
        iMaisUm+=2;
      } else {
        c[iMaisUm] = a[i];
        iMaisUm++;
      }
    } else {
      if (i<strlen(a)) {
        c[iMaisUm] = a[i];
        c[iMaisUm+1] = b[i];
        iMaisUm+=2;
      } else {
        c[iMaisUm] = b[i];
        iMaisUm++;
      }
    }
  }

  for(int i=0; i<strlen(c); i++) {
    printf("%c", c[i]);
  }


  return 0;
}

