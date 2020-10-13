#include<stdio.h>

//caso digito 
//caso mayuscula
//caso minuscula a,s,f
//caso caracter especiañ $, ?,`

int main(){
	char caracter = 'L';
	int valor_ascii = (int)caracter;
	
	if(valor_ascii >= 48 && valor_ascii <= 57){
		printf("Es valor %c es un digito", caracter);
	}else{
		if(valor_ascii >= 65 && valor_ascii <= 90){
		printf("El valor %c es mayuscula", caracter);
		}else{
			if(valor_ascii >= 97 && valor_ascii <= 122){
				printf("El valor %c es minuscula", caracter);
			}else{
				if(valor_ascii >= 32 
				&& valor_ascii <= 47 ||
				valor_ascii >= 58 
				&& valor_ascii <= 64 ||
				valor_ascii >= 91
				&& valor_ascii <= 96 ||
				valor_ascii >= 123)
				printf("El valor %c es un caracter especial", caracter);
			}
		}
	}
	return 0;
	system("PAUSE");
}
