#include<stdio.h>

int funcion_impresion_de_cuadrado(int *largo, int *alto){

int i, j;
  for (i = 0; i < *alto; i++)
  {  for (j = 0; j < *largo; j++)
     {  if (i == 0 || i == *alto - 1){
          if (j == 0 || j == *largo - 1){
            printf("+");
          } else { printf("-"); }
     } else {
           if (j == 0 || j == *largo - 1){
             printf("|");
           } else { printf(" "); }
     }
     }
     printf("\n" );
  }
  }

int main(){
  int largo , alto;

printf("Ingrese largo: ");
scanf("%d", &largo);
printf("Ingrese alto: ");
scanf("%d", &alto);

funcion_impresion_de_cuadrado(&largo, &alto);

return 0;
system("PAUSE");
}
