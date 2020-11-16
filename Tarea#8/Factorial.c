#include <stdio.h>
#include <stdlib.h>

int funcion_factorial(int cache){
  if(cache <= 0){
    return 1;

  } else{
    return cache * funcion_factorial(cache - 1);
  }
}

int main (int contador, char **contador_cache){
  int numero = 0, resultado, i = 0;

  for(i = 1; i < contador; i++){
    numero = atoi(contador_cache[i]);
    resultado = funcion_factorial(numero);
    printf("\nEl factorial del numero %d es: %d\n", numero, resultado);
  }
  return 0;
}
