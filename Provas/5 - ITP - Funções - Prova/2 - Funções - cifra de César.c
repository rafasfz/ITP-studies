#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void codifica(char *cod, int pos)
{
  for (int i = 0; i < strlen(cod); i++)
  {
    if (cod[i] - pos < 65)
      printf("%c", cod[i] - pos + 26);

    else
      printf("%c", cod[i] - pos);
  }
}

int main()
{

  int vezes, vez = 0;
  scanf("%d", &vezes);

  while (vez < vezes)
  {
    char cod[50];
    scanf("%s", cod);
    int pos;
    scanf("%d", &pos);

    codifica(cod, pos);

    printf("\n");

    vez++;
  }

  return 0;
}