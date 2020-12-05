#include<stdio.h>

	struct cuadrado{
		int largo, ancho;
	}

	main(int argv, char *argc[]){

	struct cuadrado espec;
	espec.largo = atoi(argc[1]);
	espec.ancho = atoi(argc[2]);

  int i, j,
  int k, x = 1;
	while(x < 3){
		for(i = 1; i <= espec.ancho; i++){
			if(i == 1 || i == espec.ancho){
				printf("+");
				}else{
				printf("-");
			}
		}
		printf("\n");
		if(x == 1){
			while(k <= espec.largo - 2){
				for(j = 1; j <= espec.ancho; j++){
					if(j == 1 || j == espec.ancho){
						printf("|");
					}else{
						printf(" ");
					}
				}
				printf("\n");
				k = k + 1;
			}
		}
		x = x + 1;
	}
}
