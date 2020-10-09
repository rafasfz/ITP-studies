#include <stdio.h>
#include <stdlib.h>

int mdc(int num1, int num2)
{

  int resto;

  do
  {
    resto = num1 % num2;

    num1 = num2;
    num2 = resto;

  } while (resto != 0);

  return num1;
}

int tripla(int l1, int l2, int l3)
{
  if ((l1 * l1) + (l2 * l2) == (l3 * l3))
  {
    if (mdc(l1, mdc(l2, l3)) == 1)
    {
      return 2;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
}

int main()
{

  int l[3], r[3], f = 0;

  for (int i = 0; i < 3; i++)
    scanf("%d", &l[i]);

  r[0] = tripla(l[0], l[1], l[2]);

  r[1] = tripla(l[0], l[2], l[1]);

  r[2] = tripla(l[2], l[1], l[0]);

  for (int i = 0; i < 3; i++)
  {
    if (f < r[i])
    {
      f = r[i];
    }
  }

  if (f == 0)
    printf("tripla");
  if (f == 1)
    printf("tripla pitagorica");
  if (f == 2)
    printf("tripla pitagorica primitiva");

  return 0;
}