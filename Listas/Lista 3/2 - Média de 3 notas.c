#include <stdio.h>
#include <stdlib.h>

int main() {
  
  float nota[10], media=0;
  int umaNotaMenorQueTres = 0;

  for (int i=0; i<10;i++) {
    scanf("%f", &nota[i]);
    media+=nota[i];
    if(nota[i] < 3) umaNotaMenorQueTres=1;
  }


  media/=10;
  if(media >= 5 && !umaNotaMenorQueTres) printf("Aprovado. Media = %.2f\n", media);
  else if ((media >= 5 && umaNotaMenorQueTres) || (media >= 3 && media < 5)) printf("Reposicao. Media = %.2f\n", media);
  else printf("Reprovado. Media = %.2f\n", media);
  
  for(int i=0; i<10; i++)
    if(nota[i] < 3) printf("%.2f ", nota[i]);

  printf("\n");

  for(int i=0; i<10; i++)
    if(nota[i] > 5) printf("%.2f ", nota[i]);

  printf("\n");

  

  return 0;
}