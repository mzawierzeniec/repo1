#include <stdio.h>

int main()
{

	int liczba, tablica[5], tyleile = 0;

	for(int i=0; i<=5; i++)
	{
		printf("Podaj liczbe: ");
		scanf("%d", &liczba);
		tablica[i] = liczba;
	}
	
	for(int i=0; i<=5; i++)
	{
		if(tablica[i]>0)
		tyleile++;
	}
	
	printf("Liczb dodatnich jest: %d", tyleile);
	
	return 0;
}
