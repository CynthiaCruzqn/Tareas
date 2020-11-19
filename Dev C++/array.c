#include <stdio.h>
 
int get_array_length(int *valores){
    int lenght = 0;
    while(valores[lenght]){
        lenght++;
    }
    return lenght;
}
 
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
 
int reduccion(int *valores, int cantidad_de_valores, int (*funcion_comparadora)(int,int)){
    int indice = 0;
    int valor_final = valores[0];
    for(indice =0; indice < cantidad_de_valores; indice++){
       valor_final = funcion_comparadora(valor_final, valores[indice]);
    }
    return valor_final;
 
}
 
 

int main(){
    int valores[] = {0,2,3,4};
    int cantidad = 4; //get_array_length(valores);
    int minimo = reduccion(valores, cantidad, menor);
    int maximo = reduccion(valores, cantidad, mayor);
    int sumatoria = reduccion(valores, cantidad, suma);
    printf("cantidad: %d \nminimo: %d \nmaximo: %d \nsumatoria: %d", cantidad, minimo, maximo, sumatoria);
}
