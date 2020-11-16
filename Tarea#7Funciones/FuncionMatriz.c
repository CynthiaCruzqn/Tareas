#include<stdio.h>

const int MAX = 50;


void funcion_lectura_de_matriz(int [][MAX], int, int);
void funcion_suma_de_matriz(int [][MAX], int [][MAX], int [][MAX], int, int);
void funcion_impresion_de_matriz(int [][MAX], int, int);


int main(int num_de_arg, char **dimension){
  int Matriz1[MAX][MAX], Matriz2[MAX][MAX], MatrizResult[MAX][MAX];
  int filas, columnas, contador;

do{
  printf("\nIngrese el numero de filas de las matrices: ");
  scanf("%d", &filas);
}while(filas > MAX || filas < 1);

do {
  printf("\nIngrese el numero de columnas de las matrices: ");
  scanf("%d", &columnas);
} while(columnas > MAX || columnas < 1);

printf("\nLectura de la primer matriz\n");
funcion_lectura_de_matriz(Matriz1, filas, columnas);
printf("\nLectura de la segunda matriz\n");
funcion_lectura_de_matriz(Matriz2, filas, columnas);
funcion_suma_de_matriz(Matriz1, Matriz2, MatrizResult, filas, columnas);
printf("\n\n La Matriz 1 es:\n\n" );
funcion_impresion_de_matriz(Matriz1, filas, columnas);
printf("\n\n La Matriz 2 es:\n\n" );
funcion_impresion_de_matriz(Matriz2, filas, columnas);
printf("\n\nMatriz resultante de la sumatoria:\n\n" );
funcion_impresion_de_matriz(MatrizResult, filas, columnas);

}

void funcion_lectura_de_matriz(int A[][MAX], int f, int c){
        int i, j;
        for(i = 0; i < f; i++){
                for(j = 0; j < c; j ++){
                        printf("Ingrese el elemento de%d %d: ", i + 1, j + 1);
                        scanf("%d", &A[i][j]);
                }
        }
}

void funcion_suma_de_matriz(int Matriz1[][MAX], int Matriz2[][MAX], int Matriz3[][MAX], int f, int c){
        int i, j;
        for(i = 0; i < f; i ++){
                for(j = 0; j < c; j ++){
                        Matriz3[i][j] = Matriz1[i][j] + Matriz2[i][j];
                }
        }
}

void funcion_impresion_de_matriz(int A[][MAX], int f, int c){
        int i, j;
        for(i = 0; i < f; i ++){
                for(j = 0; j < c; j ++){
                        printf("\t%d", A[i][j]);
                }
                printf("\n");
        }
}
