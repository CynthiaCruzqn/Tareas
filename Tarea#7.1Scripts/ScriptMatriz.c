#include <stdio.h>
#include <stdlib.h>

void Matriz(int MAX , int i ,int j, int matriz[MAX][MAX] ){
	     for(j= 0; j< MAX; j ++){
       for(i = 0; i < MAX; i++){
         matriz[j][i] = i + j;
       }
     }
     for(j= 0; j< MAX; j++){
       for(i = 0; i < MAX; i++){
         matriz[j][i] = matriz[j][i]+10;
       }
     }
     printf("Matriz : \n");
     for(j= 0; j< MAX; j++){
       for(i = 0; i < MAX; i++){
         printf("%d, ", matriz[j][i]);
       }
       printf("\n");
     }
}

 int main(int argc, char **argv){
     int MAX = atoi(argv[1]);
     int matriz[MAX][MAX];
     int i;
     int j;
     Matriz(MAX, i, j, matriz ) ;
     return 0;
 }
