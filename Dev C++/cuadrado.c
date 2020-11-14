#include<stdio.h>

int main()
{ char kracter = '%';
  int largo = 27, alto = 13;
  int alto_contador, contador_horizontal;
  printf("\n\n");

  for (alto_contador = 0; alto_contador < alto; alto_contador ++)
  {  for (contador_horizontal = 0; contador_horizontal < largo; contador_horizontal ++)
     {  printf("%c", kracter);
     }
     printf("\n" );
  }
return 0;
}
