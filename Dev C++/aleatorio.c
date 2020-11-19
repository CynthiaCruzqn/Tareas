#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	int v[1];
	int v2[1];
	int i, j, result;
	
	srand(time(NULL));
		for(i=0; i<1; i++){
		v[i]=1+rand()%(100-1+1);
		for(j=0; j<1; j++){
		v2[j]=1+rand()%(100-1+1);
		printf("¿Cual es la suma de %d + %d?\n ", v[i], v2[j]);
		
		result = v[i] + v2[j];
		printf("El resultado de la suma es %d\n", result);
	}
	
	}
	return 0;
}
