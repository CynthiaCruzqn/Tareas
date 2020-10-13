#include<stdio.h>

// esquinas "+"
// lados "|"
// bases "-"

/* TOMANDO i COMO EL CONTADOR PARA LA ALTURA 
   Y j COMO EL CONTADOR DEL LARGO */
   
int main(){
  int i, j, largo = 30, alto = 10;
  
  for (i = 0; i < alto; i++)
  {  for (j = 0; j < largo; j++)
     {  if (i == 0 || i == alto - 1){
          if (j == 0 || j == largo - 1){
            printf("+");
          } else { printf("-"); }
     } else {
           if (j == 0 || j == largo - 1){
             printf("|");
           } else { printf(" "); }
     }
     }
     printf("\n" );
  }
return 0;
system("PAUSE");
}
