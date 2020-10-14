#include <stdlib.h>
#include <stdio.h>

int decresc(int v[], int v_ord[], int t) {
  
  for (int j=0; j<t; j++){
    v_ord[j] = v[j];
  }

  if (t == 1) 
      return; 
  int aux;
  for (int i=0; i<t-1; i++) {
    if (v_ord[i] < v_ord[i+1]) {
      aux = v_ord[i];
      v_ord[i] = v_ord[i+1];
      v_ord[i+1] = aux;
    }
  } 

  decresc(v_ord, v_ord, t-1); 
}

int cresc(int v[], int v_ord[], int t) {
  
  for (int j=0; j<t; j++){
    v_ord[j] = v[j];
  }

  if (t == 1) 
      return; 
  int aux;
  for (int i=0; i<t-1; i++) {
    if (v_ord[i] > v_ord[i+1]) {
      aux = v_ord[i];
      v_ord[i] = v_ord[i+1];
      v_ord[i+1] = aux;
    }
  } 

  cresc(v_ord, v_ord, t-1); 
}

int main(){
  int t;
  scanf("%d", &t);
  int v[t], v_ord_decresc[t], v_ord_cresc[t]; 

  srand(1); //usa a semente padrão para o rand
  for(int i=0; i < t; i++){
    v[i] = rand()%100; //gera um número aleatório entre 0 e 99
  }

  decresc(v, v_ord_decresc, t);
  cresc(v, v_ord_cresc, t);

  for(int i=0; i < t; i++){
    printf("%d ", v[i]);
  }

  printf("\n");

  for(int i=0; i < t; i++){
    printf("%d ", v_ord_cresc[i]);
  }


}