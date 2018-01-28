#include <stdio.h>

int main()
{
	int wynik, liczba;
	printf("Podaj liczbe rzeczywista dodatnia");
	scanf("%d", &liczba);
	if(liczba>=0)
	{
		wynik = liczba*liczba;
		printf("%d\n", wynik);
	}
	else 
	printf("Podana liczba nie jest dodatnia\n");
	return 0;
}
