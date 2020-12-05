#include<stdio.h>

typedef struct Valores{
	char caracter;
	int valor_ascii;
}ascii;

char resultado(ascii a);

int main(int argc, char const *argv[]){
	ascii valor;
		valor.caracter = *argv[1];
		valor.valor_ascii = (int) valor.caracter;

	resultado(valor);

	printf("Tiene un codigo ascci de %d", valor.valor_ascii);

	return 0;
}

char resultado(ascii a){

	if(a.valor_ascii >= 48 && a.valor_ascii <= 57){
	  printf("Es valor %c es un digito\n", a.caracter);
	}else{
	  if(a.valor_ascii >= 65 && a.valor_ascii <= 90){
	  printf("El valor %c es mayuscula\n", a.caracter);
	  }else{
	    if(a.valor_ascii >= 97 && a.valor_ascii <= 122){
	      printf("El valor %c es minuscula\n", a.caracter);
	    }
	    else{
	      if(a.valor_ascii >= 32
	      && a.valor_ascii <= 47 ||
	      a.valor_ascii >= 58
	      && a.valor_ascii <= 64 ||
	      a.valor_ascii >= 91
	      && a.valor_ascii <= 96 ||
	      a.valor_ascii >= 123)
	      printf("El valor %c es un caracter especial\n", a.caracter);
	    }
	  }
	}
	return;
}
