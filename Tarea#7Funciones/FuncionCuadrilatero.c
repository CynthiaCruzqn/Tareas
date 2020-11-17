#include <stdio.h>
#include <stdlib.h>

typedef struct{

        int base;
        int altura;

} cuadrilatero;

int funcion_impresion_de_cuadrilatero (cuadrilatero *, int *);
void funcion_lectura(cuadrilatero *, int *);

int main (){

        cuadrilatero array[50];
        int contador = 0;

        for( contador = 0; contador < 2; contador ++){
                funcion_lectura(array, &contador);
        }
        for (contador = 0; contador < 2; contador ++){
                funcion_impresion_de_cuadrilatero (array, &contador);
        }

}

int funcion_impresion_de_cuadrilatero (cuadrilatero A[], int * contador){
 
  int i, j;
  printf("\n\n");


  for (i = 0; i < A[*contador].altura; i++)
   {  for (j = 0; j < A[*contador].base; j++)
      {  if (i == 0 || i == A[*contador].altura - 1){
           if (j == 0 || j == A[*contador].base - 1){
             printf("+");
           } else { printf("-"); }
      } else {
            if (j == 0 || j == A[*contador].base - 1){
              printf("|");
            } else { printf(" "); }
      }
      }
      printf("\n" );
   }
}

void funcion_lectura(cuadrilatero A[], int *contador){
          printf("Ingrese la altura del cuadrilatero %d: ", *contador + 1);
          scanf("%d", &A[*contador].altura);
          printf("Ingrese la base del cuadrilatero %d: ", *contador + 1);
          scanf("%d", &A[*contador].base);
}
