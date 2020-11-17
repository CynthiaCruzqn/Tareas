#include<stdio.h>
#include<stdlib.h>

int funcion_fibonacci(int n){

  if (n == 0 || n == 1){
        return 1;
  }else {
        return funcion_fibonacci(n - 1) + funcion_fibonacci(n - 2);
  }
}

int main (){

    int valor = 0;

    do{
            printf("Ingrese el numero a evaluar: ");
            scanf("%d", &valor);
    }while (valor > 40 || valor < 1);

    printf("El numero %d\t recive el valor %d en Fibonacci", valor, funcion_fibonacci(valor));
  return 0;
}
