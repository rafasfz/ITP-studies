#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcPi(double i) {
  if(i == 0) return 4/(2 * i + 1) * (pow(-1, i));
  return 4/(2 * i + 1) * (pow(-1, i)) + calcPi(i - 1);
}

double pi(double p) {

  double i=0, piV=0, piVP=1;
  while((unsigned long long) (piV * (pow(10, p))) != (unsigned long long) (piVP * (pow(10, p)))) {
    if(i >= 10000) {
      return -1;
    }
    piVP = piV;
    piV = calcPi(i);
    i++;
  }
  return piV;
}

int main(){
  int p;
  char format[20];
  scanf("%d", &p);
  double pd = p;

  double numPi = pi(pd);

  sprintf(format, "Valor de pi %%.%dlf\n",p);
  printf(format, numPi);
  
}