#include <stdio.h>
#include<conio.h>
#include<string.h>

  struct cuadrilatero{

     int base;
     int altura;

   };

   int funcion_impresion_de_cuadrilatero(struct cuadrilatero){
     int i, j, base, altura;

     for (i = 0; i < altura; i++)
     {  for (j = 0; j < base; j++)
        {  if (i == 0 || i == altura - 1){
             if (j == 0 || j == base - 1){
               printf("+");
             } else { printf("-"); }
        } else {
              if (j == 0 || j == base - 1){
                printf("|");
              } else { printf(" "); }
        }
        }
        printf("\n" );
     }

   }


int main(){

   struct cuadrilatero cuadrilatero1;
    int i, j;

   printf("Ingrese la base: \n");
   scanf("%d", &base);
   printf("Ingrese altura: ");
   scanf("%d", &altura);

   funcion_impresion_de_cuadrilatero(&largo, &altura);

  return 0;
  system("pause");

 }
