#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[3][2], maior=0, lin, col, i, l;
	
	for(i=0; i<3; i++){
		for(l=0; l<2; l++){
			printf("Digite el valor de [%i][%i]: ", i,l);
			scanf("%i", &matriz[i][l]);
			if(i==0 && l==0) maior = matriz[i][l];
			if(matriz[i][l]>maior) maior = matriz[i][l];
			lin=i;
			col=l;
		}
	}
	printf("\El numero mayor en la matriz es %i y se encuentra en[%i][%i]\n", maior, lin,col);

system("PAUSE");
return 0;

}
