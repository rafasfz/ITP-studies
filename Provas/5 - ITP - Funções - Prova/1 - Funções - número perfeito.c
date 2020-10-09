#include <stdio.h>
#include <stdlib.h>

void numEhPerfeito(int num)
{
  int divisores[100], c = 0, numPerfeito = 0;
  for (int i = num - 1; i > 0; i--)
  {
    if (num % i == 0)
    {
      divisores[c] = i;
      c++;
      numPerfeito += i;
    }
  }

  if (num == numPerfeito)
  {
    printf("%d =", num);
    for (int i = c - 1; i >= 0; i--)
    {
      if (i == 0)
        printf(" %d", divisores[i]);
      else
        printf(" %d +", divisores[i]);
    }
  }
  else
  {
    printf("%d nao eh perfeito", num);
  }
}

int main()
{

  int num;
  scanf("%d", &num);

  numEhPerfeito(num);

  return 0;
}