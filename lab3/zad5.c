#include <stdio.h>

int main()
{

	int liczba, tablica[5];

	for(int i=0; i<=5; i++)
	{
		printf("Podaj liczbe: ");
		scanf("%d", &liczba);
		tablica[i] = liczba;
	}
	
	for(int i=0; i<=5; i++)
	{
		printf("Element[%d]\n", tablica[i]);
	}
	
	return 0;
}
