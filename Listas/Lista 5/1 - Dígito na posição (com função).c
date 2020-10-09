#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pegarNumeroPosicao(int num, int pos)
{
  char nums[20];
  sprintf(nums, "%i", num);
  pos = strlen(nums) - 1 - pos;
  return nums[pos];
}

int main()
{
  int num, pos;
  scanf("%d", &num);
  scanf("%d", &pos);
  printf("O digito na posicao solicitada e %c", pegarNumeroPosicao(num, pos));
  return 0;
}