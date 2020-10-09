#include <stdio.h>, <stdlib.h>

int main() {
  char a;
  scanf("%c\n", &a);

  char b;
  scanf("%c", &b);

  switch (a < b) {
    case 1:
      printf("Caractere %c antecede %c", a, b);
      break;

    case 0:
      switch (b < a) {
        case 1:
        printf("Caractere %c antecede %c", b, a);
        break;

        case 0:
          printf("Caracteres %c e %c iguais", a, b);
          break;

      }
  }

  // if (a < b) printf("Caractere %c antecede %c", a, b);
  // else if (b < a) printf("Caractere %c antecede %c", b, a);
  // else printf("Caracteres %c e %c iguais", a, b); }

  return 0;
}