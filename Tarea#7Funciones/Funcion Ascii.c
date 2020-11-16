#include<stdio.h>

int funcion_impresion_de_ascii(int *valor_ascii, char *caracter){
	
  if(*valor_ascii >= 48 && *valor_ascii <= 57){
		printf("Es valor %c es un digito\n", *caracter);
	}else{
		if(*valor_ascii >= 65 && *valor_ascii <= 90){
		printf("El valor %c es mayuscula\n", *caracter);
		}else{
			if(*valor_ascii >= 97 && *valor_ascii <= 122){
				printf("El valor %c es minuscula\n", *caracter);
			}
      else{
				if(*valor_ascii >= 32
				&& *valor_ascii <= 47 ||
				*valor_ascii >= 58
				&& *valor_ascii <= 64 ||
				*valor_ascii >= 91
				&& *valor_ascii <= 96 ||
				*valor_ascii >= 123)
				printf("El valor %c es un caracter especial\n", *caracter);
			}
		}
	}
}

int main(){
	char caracter = 'L';
	int valor_ascii = (int)caracter;

funcion_impresion_de_ascii(&valor_ascii, &caracter);
caracter = 'M';
funcion_impresion_de_ascii(&valor_ascii, &caracter);

  return 0;
	system("PAUSE");
}
