#include <stdio.h>
#include <stdlib.h>

int t_v = 0;

int fibonacci(int n) {
  if (n == 1 || n == 2 || n == 0 ) 
    return 1;
  else 
    return fibonacci(n-1) + fibonacci(n-2);
}

int isFib(int n) {
  int c = 0;
  for (int i=0; i<12; i++) {
    if(fibonacci(i) == n) {
      return 1;
    }
  }
  return 0;
}

int fibnot(int n1, int n2, int v[]) {

  if(n1 + 1 >= n2) {
    return v;
  }

  if(!isFib(n1 + 1)) {
    v[t_v] = n1 + 1;
    t_v++;
  }

  return fibnot(n1 + 1, n2, v);
}

int main()
{
  int n1, n2, v[100] = {-1};
  scanf("%d %d", &n1, &n2);
  fibnot(n1, n2, v);

  for(int i=0; i < t_v; i++) {
    printf("%d ", v[i]);
  }

  return 0;
}