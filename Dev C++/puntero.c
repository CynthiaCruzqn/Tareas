
#include <stdio.h>
int main(){
  int *puntero;
  int mi_variable = 4;
  puntero = &mi_variable;
  printf("valor de mi puntero (referencia o direccion en memoria) \n");
  printf("%d \n", puntero);
  printf("el valor de donde mi puntero esta apuntando \n");
  printf("%d \n", *puntero);
  mi_variable++;
  printf("valor de mi puntero \n");
  printf("%d \n", puntero);
  printf("el valor de donde mi puntero esta apuntando despues de modificar mi variable \n");
  printf("%d \n", *puntero);
  *puntero= 10;

 

  printf("valor de mi puntero \n");
  printf("%d \n", puntero);
  printf("el valor de donde mi puntero esta apuntando despues de modificar la referencia del puntero \n");
  printf("%d \n", *puntero);
  printf("valor de mi variable \n");
  printf("%d \n", mi_variable);

 

}

 

 
/*
#+BEGIN_SRC c
#include <stdio.h>
int main(){
  char *puntero;
  char arreglo_char[] = {'h','o','l','a'};
  puntero = &arreglo_char;
  printf("valor de mi puntero (referencia o direccion en memoria) \n");
  printf("%d \n", puntero);
  printf("el valor de donde mi puntero esta apuntando \n");
  printf("%c \n", *puntero);
  printf("valor de mi puntero (referencia o direccion en memoria) \n");
  printf("%d \n", puntero+1);
  printf("el valor de donde mi puntero esta apuntando \n");
  printf("%c \n", *(puntero+1));
  printf("valor de mi puntero (referencia o direccion en memoria) \n");
  printf("%d \n", puntero+2);
  printf("el valor de donde mi puntero esta apuntando \n");
  printf("%c \n", *(puntero+2));
  printf("valor de mi puntero (referencia o direccion en memoria) \n");
  printf("%d \n", puntero+3);
  printf("el valor de donde mi puntero esta apuntando \n");
  printf("%c \n", *(puntero+3));
  printf("el valor de donde mi puntero esta apuntando \n");
  printf("%c \n", *(puntero+4));
}
 */
