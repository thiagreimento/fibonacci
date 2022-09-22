#include <stdio.h>

int main(){

  int n_menos_1  = 1,n_menos_2 = 1, i = 1, n;
  for(i=1;i<=10;i++){

    //printf("n_menos_1 = %d\t",n_menos_1);
    //printf("n_menos 2 = %d\t",n_menos_2);

    n  = n_menos_1 + n_menos_2;

    //printf("n = %d\t",n);

    n_menos_2 = n_menos_1;
    n_menos_1 = n;
    printf("%dº termo: %d\n",i+2,n);

  }

  return 0;
}


