#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fatorial (float n) {
  if(n == 1 || n == 0) {
    return 1;
  }
  return n * fatorial(n-1);
}

double taylor(int a, int n) {
  double res = pow(a, n) / fatorial(n);

  if(n == 0) {
    return pow(a, n) / fatorial(n);
  }

  return res + taylor(a, n-1);

}

int main()
{
  double n, a;
  scanf("%lf %lf", &a, &n);
  printf("%lf\n", taylor(a, n));
  printf("%f", exp(a));
  return 0;
}