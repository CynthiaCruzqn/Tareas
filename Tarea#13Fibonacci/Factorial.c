#include <stdio.h>
#include <stdlib.h>

int f_factorial(int n){
	if(n<=0){
		return 1;
	}else{
		return n*f_factorial(n-1);
	}
}
int main(int arg_cont, char **arg_v){
	int n=0;
	int resultado;
	int i=0;
	
	for(i=1;i<arg_cont;i++)
	{
		n=atoi(arg_v[i]);
		resultado=f_factorial(n);
		printf("El factorial del numero %d es: %d\n",n,resultado);
	}
	return 0;
}
