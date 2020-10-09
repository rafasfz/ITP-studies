#include <stdio.h>
#include <stdlib.h>

void cresc(int *array)
{
  int aux;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (array[i] < array[j])
      {
        aux = array[j];
        array[j] = array[i];
        array[i] = aux;
      }
    }
  }
  for (int i = 0; i < 5; i++)
    printf("%d ", array[i]);
}

void descr(int *array)
{
  int aux;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (array[i] > array[j])
      {
        aux = array[j];
        array[j] = array[i];
        array[i] = aux;
      }
    }
  }
  for (int i = 0; i < 5; i++)
    printf("%d ", array[i]);
}

int main()
{
  int array[5], originalArray[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &array[i]);
    originalArray[i] = array[i];
  }

  cresc(array);
  printf("\n");
  descr(array);
  printf("\n");

  for (int i = 0; i < 5; i++)
    printf("%d ", originalArray[i]);

  return 0;
}