#include <stdio.h>

  struct cuadrilatero{

     int base;

     int altura;

   };

int main(){

   struct cuadrilatero cuadrilatero1;
    int i, j;

   cuadrilatero1.base = 10;

   cuadrilatero1.altura = 15.123465;

   printf("Base del cuadrilatero1: %d \n", cuadrilatero1.base);

   printf("Altura del cuadrilatero1: %d \n", cuadrilatero1.altura);

  for (i = 0; i < cuadrilatero1.altura; i++)
  {  for (j = 0; j < cuadrilatero1.base; j++)
     {  if (i == 0 || i == cuadrilatero1.altura - 1){
          if (j == 0 || j == cuadrilatero1.base - 1){
            printf("+");
          } else { printf("-"); }
     } else {
           if (j == 0 || j == cuadrilatero1.base - 1){
             printf("|");
           } else { printf(" "); }
     }
     }
     printf("\n" );
  }
  return 0;

 }
