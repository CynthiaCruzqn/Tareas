#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Datos{
	char   matricula_str[10];
	char  primer_parcial_str[10];
	char  segundo_parcial_str[10];
	char  pia_str[10];
	char  final_str[10];
};

void printAllWords(struct Datos punter[], FILE * fp);

int main()
{
  FILE *fp;

  if ((fp = fopen("Evaluaciones.csv", "r")) == NULL) {
      perror("Error opening file");
      exit(EXIT_FAILURE);
  }

  struct Datos Datos[50];

  printAllWords(Datos, fp);

  fclose(fp);
  
  return EXIT_SUCCESS;
}

void printAllWords(struct Datos punter[], FILE * fp)
{
    char tmp[20];
    int i = 0;
    int count = 0;
    int bandera = 1;
    while (fscanf(fp, "%s ", tmp) != EOF) {
        if(i >= 9){
        	
        	switch(bandera){
        		case 1: 
        				//fscanf(fp, "%[^,]", tmp);
        				//atoi(tmp);
						strcpy(punter[count].matricula_str, tmp);
						bandera = 2;
						printf("Matricula: %s\n", punter[count].matricula_str);
						break;
				case 2:
						//atoi(tmp);
						strcpy(punter[count].primer_parcial_str, tmp);
						bandera = 3;
						printf("Parcial 1: %s\n", punter[count].primer_parcial_str);
						break;
				case 3:
						//atoi(tmp);
						strcpy(punter[count].segundo_parcial_str, tmp);
						bandera = 4;
						printf("parcial 2: %s\n", punter[count].segundo_parcial_str);
						break;
				case 4: 
						//atoi(tmp);
						strcpy(punter[count].pia_str, tmp);
						bandera = 5;
						printf("PIA: %s\n", punter[count].pia_str);
						break;
				case 5:
						//stof(tmp);
						strcpy(punter[count].final_str, tmp);
						bandera = 1;
						printf("Calificacion final: %s\n", punter[count].final_str);
						break;
			}
        }

        count = count + 1;
        i++;
    }
    
}
