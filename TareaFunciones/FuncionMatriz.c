#include<stdio.h>



int main(){

  int dimension = 5;
  int Matriz1 [dimension][dimension], Matriz2 [dimension][dimension];
  int MatrizResult [dimension][dimension];
  int i, j;

  for (j = 0; j < dimension; j ++)
     {
       for(i = 0; i < dimension; i ++)
          {
            Matriz1 [j][i] = i + j;
            Matriz2 [j][i] = i + j + 100;
            MatrizResult[j][i] =
            Matriz1 [j][i] + Matriz2 [j][i];

          }
     }
  printf("La Primera matriz es: \n" );
  for (j = 0; j < dimension; j ++)
     {
       for (i = 0; i < dimension; i ++)
          {
            printf("%d, ", Matriz1[j][i]);
          }
       printf("\n");
     }
     printf("La Segunda matriz es: \n" );
     for (j = 0; j < dimension; j ++)
        {
          for (i = 0; i < dimension; i ++)
             {
               printf("%d, ", Matriz2[j][i]);
             }
          printf("\n");
        }
        printf("La matriz resultante es: \n" );
        for (j = 0; j < dimension; j ++)
           {
             for (i = 0; i < dimension; i ++)
                {
                  printf("%d, ", MatrizResult[j][i]);
                }
             printf("\n");
           }

           return 0;
}
