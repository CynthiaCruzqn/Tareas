#include <stdio.h>

typedef struct Calificaciones{
	int  Matricula;
	int  Parcial_uno;
	int  Parcial_dos;
	int  PIA;
	float  final_str;
}calif;



int main(int argc, char *argv[]){

	calif resultados;
	resultados.Matricula = atoi(argv[1]);
	resultados.Parcial_uno = atoi(argv[2]);
	resultados.Parcial_dos = atoi(argv[3]);
	resultados.PIA = atoi(argv[4]);
	resultados.final_str = (resultados.Parcial_uno + resultados.Parcial_dos + resultados.PIA)/3;



  FILE *fp;
  fp = fopen("Calificaciones.csv", "a");
  int i = 1;
   fprintf(fp, "Matricula, PrimerParcial, SegundoParcial, PIA, Final\n");
   fprintf(fp, "%d, %d, %d, %d, %.2f\n", resultados.Matricula, resultados.Parcial_uno, resultados.Parcial_dos, resultados.PIA, resultados.final_str);
       printf("Calificaciones de alumno %d son: %d %d %d %d %.2f\n", i ++, resultados.Matricula, resultados.Parcial_uno, resultados.Parcial_dos, resultados.PIA, resultados.final_str);
  fflush(fp);
  fclose(fp);

  return 0;

}
