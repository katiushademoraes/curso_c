#include <stdio.h>

int main (void) {

  unsigned int i = 0; // evita que o contador fique negativo

imprimir: 
  printf("O valor de i é %u \n", i);
  i++;
  if (i<3)
    goto imprimir;
return 0;


}
