#include <stdio.h>
#include <stdlib.h>

int maiorSeq=0, maiorInd=0;
int partVetorRec(int k, int v[], int n, int p[], int cFunc) { 
  if (cFunc >= n) return 0;

  int part = v[cFunc];
  int atual = cFunc;
  int seq=0;
  for(int j=1; j<n-cFunc; j++) {
    if(part > k) break;
    part+=v[cFunc+j];
    seq++;
    if(part > k) break;
  }
  if(seq > maiorSeq) {
    maiorSeq = seq;
    maiorInd = cFunc;
  }

  for(int i=0; i<maiorSeq; i++) {
    p[i] = v[i+maiorInd];
  }

  return partVetorRec(k, v, n, p, cFunc + 1);
}

int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  int v[n], p[n];
  for (int i=0; i<n; i++) {
    scanf("%d", &v[i]);
    p[i] = -1;
  }

  partVetorRec(k, v, n, p, 0);

  for(int i=0; i < maiorSeq; i++ ) {
    printf("%d ", p[i]);
  }

  if(maiorSeq == 0) {
    printf("Partição Vazia");
  }

  return 0;
}