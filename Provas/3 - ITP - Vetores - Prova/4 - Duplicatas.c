#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int num;
  scanf("%d", &num);

  int v[num], ig=0;

  float ant[num];

  for (int i=0; i<num; i++) scanf("%d", &v[i]);

  for (int i=0; i<num; i++) ant[i] = 3.141592;

  for (int i=0; i<num; i++) {
    int igual=0, jaAp=0;

    for (int j=0; j<num; j++) {
      if(v[i] == v[j]) igual+=1;
    }

    for (int j=0; j<num; j++) {
      if (v[i] == ant[j]) jaAp = 1;
    }

    if(igual >= 2 && !jaAp) { 
      ig+=1;
      ant[i] = v[i];
    }

  }

  printf("%d\n", ig);

  return 0;
}