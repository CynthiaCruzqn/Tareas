#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Calificaciones{
  char Matricula[10];
  int Parcial_uno;
  int Parcial_dos;
  int PIA;
  float Final;
};

int total_renglones(FILE *fpcp){
  int comparacion, contador = 0;
	int i = 0;
  char A[200];
	char B[200];
  fgets(B,200,fpcp);
  do{
    fgets(A,200,fpcp);
    comparacion = strcmp(A,B);
    contador++;
    strcpy(B,A);
    i++;
  }while(comparacion != 0);
  return contador;
}

void funcion_lectura_encabezados(FILE *fpcpy2){
  char Encabezado[200];
  fgets(Encabezado,200,fpcpy2);
  printf("%s",Encabezado);
}

void funcion_lectura_de_datos(FILE *fpcpy3, struct Calificaciones *tupla2){
  char Mat[10];
  int Primer_Parcial, Segundo_Parcial, Pia;
  float calif_final;
  fscanf(fpcpy3,"%[^,], %d, %d, %d, %f\n", Mat,&Primer_Parcial,&Segundo_Parcial,&Pia,&calif_final);
  strcpy(tupla2->Matricula,Mat);
  tupla2->Parcial_uno = Primer_Parcial;
  tupla2->Parcial_dos = Segundo_Parcial;
  tupla2->PIA = Pia;
  tupla2->Final = calif_final;
}

void funcion_impresion(struct Calificaciones *tupla3){
  printf("%s %d %d %d %.2f\n",tupla3->Matricula, tupla3->Parcial_uno, tupla3->Parcial_dos, tupla3->PIA, tupla3->Final);
}

int main(){
  FILE *fp;
  int renglones;
  fp = fopen("Calificaciones.csv","r+");
  renglones = total_renglones(fp);
  struct Calificaciones Calif[renglones - 1];
  rewind(fp);
  int i = 0;
  for(i = 0; i < renglones; i++){
    if(i == 0){
      funcion_lectura_encabezados(fp);
    }else{
      funcion_lectura_de_datos(fp,&Calif[i - 1]);
      funcion_impresion(&Calif[i - 1]);
    }
  }
  fclose(fp);
  return 0;
}
