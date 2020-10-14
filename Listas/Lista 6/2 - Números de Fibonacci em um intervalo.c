#include <stdio.h>
#include <stdlib.h>

int n = 1;
int c = 0;

int fibonacci(int n) {
  if (n == 1 || n == 2) 
    return 1;
  else 
    return fibonacci(n-1) + fibonacci(n-2);
}

int fibonacciQt(int n1, int n2) {
  int numFib = fibonacci(n);
  n++;
  if(numFib < n2) {
    if(numFib > n1) c++;
    return fibonacciQt(n1, n2);
  } else {
    int final = c;
    c = 0;
    n = 1;
    return final;
  }
}

int main()
{
  int n1, n2;
  scanf("%d %d", &n1, &n2);

  int qtFibonacci = fibonacciQt(n1, n2);
  printf("Existem %d números de fibonacci entre %d e %d", qtFibonacci, n1, n2);
  return 0;
}