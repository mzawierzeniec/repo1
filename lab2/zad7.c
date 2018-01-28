#include <stdio.h>
#include <math.h>

int main()
{
	int wynik, liczba;
	double pierwiastek;
	
	printf("Podaj liczbe rzeczywista");
	scanf("%d", &liczba);
	if(liczba>0)
	{
		wynik = liczba-2*liczba;
		pierwiastek = sqrt(liczba);
		printf("Pierwiastek z liczby: %lf\n Odwrotnosc: %d\n", pierwiastek, wynik);
	}
	else if(liczba==0){printf("Liczba powinna byc rozna od 0");}
	else 
	{
		wynik = liczba+(-2*liczba);
		printf("Odwrotnosc: %d\n", wynik);

	}
	return 0;
}
