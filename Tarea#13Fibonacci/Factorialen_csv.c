#include <stdio.h>

int factorial(int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int  main(int argc, char const *argv[]) {

	FILE *fp;
	fp = fopen("ArchivoFactorial.csv","a");

   int i = atoi(argv[1]);
   int a = factorial(i);
   fprintf(fp,"Factorial de, %d, es, %d\n", i, a);

   fclose(fp);
   
   return 0;
}
