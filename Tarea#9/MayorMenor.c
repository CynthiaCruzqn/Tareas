/*
sturct
arreglo de enteros
puntero a una funcion que reciba el arreglo y regresa la suma
puntero a una funcion que reciba el arreglo y regresa la min
puntero a una funcion que reciba el arreglo y regresa la max
puntero a una funcion que reciba el arreglo y regresa la promedio

main
arreglo de esa struct con 3 element
 declarar los 3 elementos y asignarles las funciones
Ejecutar las operaciones e imprimier el resultado
*/

#include <stdio.h>
typedef int (*operacion)(int,int);

struct Pares{
    int x;
    int y;
    operacion operador_entre_elemtos;
};


int menor(int valor1, int valor2){
    if(valor1 < valor2){
        return valor1;
    }else
    {
        return valor2;
    }
}

int mayor(int valor1, int valor2){
    return valor1 > valor2 ? valor1 : valor2;
}

int suma(int valor1, int valor2){
    return valor1 + valor2;
}

int ejecutar_operacion(struct Pares *tupla){
    return tupla->operador_entre_elemtos(tupla->x, tupla->y);
}

int main(){
    struct Pares listado_tuplas[3];

    listado_tuplas[0].x = 10;
    listado_tuplas[0].y = 12;
    listado_tuplas[0].operador_entre_elemtos = menor;

    listado_tuplas[1].x = 1;
    listado_tuplas[1].y = 120;
    listado_tuplas[1].operador_entre_elemtos = mayor;

    listado_tuplas[2].x = 45;
    listado_tuplas[2].y = 56;
    listado_tuplas[2].operador_entre_elemtos = suma;

int i = 0;
    for( i = 0; i < 3; i++){
        int resultado = ejecutar_operacion(&listado_tuplas[i]);
        printf("resultado %d = %d \n", i, resultado);
    }

    return 0;
}
