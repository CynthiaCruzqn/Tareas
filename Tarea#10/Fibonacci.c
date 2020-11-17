#include<stdio.h>
#include<stdlib.h>

int funcion_fibonacci(int n){

  if (n == 0 || n == 1){
        return 1;
  }else {
        return funcion_fibonacci(n - 1) + funcion_fibonacci(n - 2);
  }
}

int main (int argc, char **argv){
    int valor = 0;
    int i = 0;

    for (i = 1; i < argc; i ++){  
            valor = atoi(argv[i]);
            printf("El numero %d\t recive el valor %d en Fibonacci", valor, funcion_fibonacci(valor));
    }
    printf("\n");

  return 0;
}
