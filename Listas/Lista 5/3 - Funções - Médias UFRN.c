#include <stdio.h>
#include <stdlib.h>

float mediaAntiga()
{
  float n[3], media;
  scanf("%f %f %f", &n[0], &n[1], &n[2]);
  media = ((n[0] * 4) + (n[1] * 5) + (n[2] * 6)) / 15;
  return media;
}

float mediaNova()
{
  float n[3], media;
  scanf("%f %f %f", &n[0], &n[1], &n[2]);
  media = (n[0] + n[1] + n[2]) / 3;
  return media;
}

float op(char tipo)
{
  switch (tipo)
  {
  case 'A':
    return mediaAntiga();
  case 'N':
    return mediaNova();
  }
}

int main()
{
  char tipo;
  scanf("%c", &tipo);
  float media = op(tipo);
  printf("%.2f", media);
  return 0;
}