#include <stdio.h>
#include <stdlib.h>

void ordenaVetor(int *vetor, int tam)
{
  int aux;
  for (int i = 0; i < tam; i++)
  {
    for (int j = 0; j < tam; j++)
    {
      if (vetor[i] < vetor[j])
      {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }

  for (int i = 0; i < tam; i++)
  {
    printf("%d ", vetor[i]);
  }
}

int main()
{
  int qVetores;
  scanf("%d", &qVetores);
  int tamVetores[qVetores];
  for (int i = 0; i < qVetores; i++)
    scanf("%d", &tamVetores[i]);

  int vetores[qVetores][50];

  for (int i = 0; i < qVetores; i++)
  {
    for (int j = 0; j < tamVetores[i]; j++)
    {
      scanf("%d", &vetores[i][j]);
    }
  }

  for (int i = 0; i < qVetores; i++)
  {
    ordenaVetor(vetores[i], tamVetores[i]);
    printf("\n");
  }
  return 0;
}