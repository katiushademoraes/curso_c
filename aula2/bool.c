#include <stdio.h>
#include <stdbool.h>

int main(void){

  bool b;

  b = true;
  b = false;

  printf("O tamanho de b(bool) é %lu\n", sizeof b);

  return 0;
}

