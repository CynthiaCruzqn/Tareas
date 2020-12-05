#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Alumnos{
	char  Matricula[10];
	char  Parcial_uno[10];
	char  Parcial_dos[10];
	char  PIA[10];
	char  promedio[10];
};

void printAllWords(struct Alumnos punter[], FILE * fp);

int main()
{
  FILE *fp;

  if ((fp = fopen("Calificaciones.csv", "r")) == NULL) {
      perror("Error opening file");
      exit(EXIT_FAILURE);
  }

  struct Alumnos A[50];

  printAllWords(Alumnos, fp);

  fclose(fp);

  return EXIT_SUCCESS;
}

void printAllWords(struct Alumnos punter[], FILE * fp)
{
    char tmp[20];
    int i = 0, j = 0;
    int opcion = 1;


    while (fscanf(fp, "%s ", tmp) != EOF) {
        if(i >= 9){

        	switch(opcion){
        		case 1:
						strcpy(punter[j].Matricula, tmp);
						opcion = 2;
						printf("Matricula: %s\n", punter[j].Matricula);
						break;
				case 2:
						//atoi(tmp);
						strcpy(punter[j].Parcial_uno, tmp);
						opcion = 3;
						printf("Parcial 1: %s\n", punter[j].Parcial_uno);
						break;
				case 3:
						strcpy(punter[j].Parcial_dos, tmp);
						opcion = 4;
						printf("parcial 2: %s\n", punter[j].Parcial_dos);
						break;
				case 4:
						strcpy(punter[j].PIA, tmp);
						opcion = 5;
						printf("PIA: %s\n", punter[j].PIA);
						break;
				case 5:
						strcpy(punter[j].promedio, tmp);
						opcion = 1;
						printf("Promedio: %s\n", punter[j].promedio);
						break;
			}
        }

        j = j + 1;
        i++;
    }

}
