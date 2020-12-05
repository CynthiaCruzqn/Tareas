#include <stdio.h>
#include <stdlib.h>

long cache[100];
int contador = 0;
int contador_cache = 0;

long fibonacci(long numero){
    contador++;
    if(numero == 0 || numero == 1){
      return 1;
    }else{
    return fibonacci(numero-1) + fibonacci(numero-2);
    }
}


long fibonacci_cached(long  numero){
    contador_cache++;
    long valor_en_cache = cache[numero];
    if(valor_en_cache <= 0){
        cache[numero] = fibonacci(numero-1) + fibonacci(numero-2);
        valor_en_cache = cache[numero];
    }
    return valor_en_cache;
}

int main(int numero_de_argumentos, char **valores){
    long posicion_a_calcular = 0;
    cache[0]=1;
    cache[1]=1;
    int i =1;
    for(i = 1; i < numero_de_argumentos; i++){
        posicion_a_calcular = atoi(valores[i]);
        printf("n: %d\tfibonacci: %ld\n", posicion_a_calcular, fibonacci(posicion_a_calcular));
    }
    printf("La funcion fibonacci fue llamada %ld veces\n ",contador);

    for(i = 1; i < numero_de_argumentos; i++){
        posicion_a_calcular = atoi(valores[i]);
        printf("n: %d\tfibonacci cache: %ld\n", posicion_a_calcular, fibonacci_cached(posicion_a_calcular));
    }
    printf("La funcion fibonacci con memoria fue llamada %ld",contador_cache);
    return 0;
}
