#include <stdio.h>

int funcion_calculo_de_serie(int *elm_max){
  int sumatoria = 0, elementos_maximos = *elm_max;

  printf("La sumatoria es: ");
  sumatoria = (elementos_maximos*(elementos_maximos+1)*(2*elementos_maximos+1))/6;
  printf("Sumatoria %d", sumatoria);
}

int funcion_impresion_de_serie(int *elm_max){
int i;
  printf("La seire es de los cuadrados es:");
  for(i = 1; i<=*elm_max; i++){
    printf("%d, ", i * i);

  }
}

int main(){
int elm_max = 0;
printf("Elementos maximos: ");
scanf("%d", &elm_max);

funcion_calculo_de_serie(&elm_max);
funcion_impresion_de_serie(&elm_max);
    return 0;

}
