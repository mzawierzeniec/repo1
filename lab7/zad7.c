#include <stdio.h>

#define MIESIACE 12
#define LATA 4

void opady_lata(int *deszcz, int *srednieroczne) {
	int wlatach = 0;
	int pom = 0;
	for(int i = 0; i<=47; i++)
	{
		wlatach = wlatach+deszcz[i];
		if((i+1)%12 == 0){
			printf("%d\n", wlatach);
			srednieroczne[pom] = wlatach;
			pom++;
			wlatach = 0;
		}
	}
}

void f_srednie_roczne(int *srednieroczne) {
	int sredniaroczna;
	for(int i = 0; i<=3; i++)
	{
		sredniaroczna = srednieroczne[i]/12;
		printf("%d\n", sredniaroczna);
	}
}

void f_srednie_miesieczne(int *deszcz, int *sredniemiesieczne) {
	printf("\nI   II  III IV   V  VI VII VIII IX  X   XI XII\n");
	printf("----------------------------------------------\n");
	for(int i = 0; i<=11; i++)
	{
		sredniemiesieczne[i] = (deszcz[i] + deszcz[i+12] 
		+ deszcz[i+24] + deszcz[i+36])/4;
	}
	for(int i = 0; i<=11; i++)
	{
		printf("%d  ", sredniemiesieczne[i]);
	}
}

int main () {
  int srednieroczne[4];
  int sredniemiesieczne[12];
  int deszcz[LATA][MIESIACE] = { // dane o opadach są wyrażone w mm
    {29, 34, 34, 39, 34, 47, 35, 27, 29, 28, 32, 38},  // 2008
    {24, 25, 30, 36, 29, 34, 30, 27, 27, 23, 28, 27},  // 2009
    {31, 36, 41, 42, 35, 43, 35, 30, 34, 31, 33, 37},  // 2010
    {39, 32, 50, 53, 39, 38, 50, 43, 36, 35, 54, 40}   // 2011
  };
  
  printf("Opady w kolejnych latach (w mm)\n");
  opady_lata(&deszcz[0][0], &srednieroczne[0]);
  printf("\nRoczna średnia z kolejnych lat wynosi:\n");
  f_srednie_roczne(&srednieroczne[0]);
  printf("\nSrednie z kolejnych miesiecy z czterech lat:\n");
  f_srednie_miesieczne(&deszcz[0][0], &sredniemiesieczne[0]);

}

