#include <stdio.h>
#include "fib.h"

unsigned int fib(unsigned int n){

  if(n == 1 || n == 0)
    return 1;
  return fib(n-1) + fib(n-2);
}

int main(){

  printf("Escolha o i-esimo termo da sequencia de fibonacci:\n");
  unsigned int n;
  scanf("%d",&n);

  int fibn = fib(n-1);
  printf("O %d-esimo termo da sequencia de fibonacci eh: %d\n",n, fibn);

  return 0;
}


