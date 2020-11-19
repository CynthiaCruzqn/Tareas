#include <stdio.h>


void imprimir(int valor_entero){
    printf("Hola! %d \n", valor_entero);
}

 

void imprime_n_a_m_veces(int n, int m){
    int i;
    for(i = n; i < m; i++){
        imprimir(i);
    }
}

 

int main(){
    int i = 0;
    for(i = 0; i < 3; i++){
        imprime_n_a_m_veces(0,10+i*2);
        printf("valor de i es %d \n", i);
    }
    return 0;
}
