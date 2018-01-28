#include <stdio.h>
int main() {
   char c;
   int nb = 0;  /* liczba znaków odstępu */
   int nt = 0;  /* liczba znaków tabulacji */
   int nl = 0;  /* liczba znaków nowego wiersza */
   while ((c=getchar()) != EOF) {
	   //printf(" %d",c);
      if(c==32){nb++;}
      if(c==9){nt++;}
      if(c==10){nl++;}
   }
   printf("liczba znaków odstępu = %d, \
   tabulacji = %d, nowego wiersza = %d\n", nb, nt, nl );
   return 0;
}
