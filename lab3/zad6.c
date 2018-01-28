#include <stdio.h>

int main()
{

	int najwieksza, najmniejsza, liczba, tablica[5], pom, pom2;

	for(int i=0; i<=5; i++)
	{
		printf("Podaj liczbe: ");
		scanf("%d", &liczba);
		tablica[i] = liczba;
	}
	
	najmniejsza = tablica[0];
	najwieksza = tablica[0];
	
	for(int i=0; i<=5; i++)
	{
		pom = tablica[i];
		pom2 = tablica[i];
		if(pom>najwieksza){najwieksza = pom;}
		if(pom<najmniejsza){najmniejsza = pom2;}
	}
	
	printf("Najmniejsza: %d\n", najmniejsza);
	printf("Najwieksza: %d", najwieksza);
	
	return 0;
}
