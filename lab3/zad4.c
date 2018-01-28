#include <stdio.h>

int main()
{

	int liczba, suma = 0;

	printf("Podaj liczbe wieksza od 1: ");
	scanf("%d", &liczba);
	if(liczba < 1){printf("Liczba powinna byc wieksza od 1");}
	else 
	{
		for(int i=1; i<=liczba; i++)
		{
			suma = suma + i;
		}
	printf("Silnia z liczby %d wynosi: %d", liczba, suma);
	}
	return 0;
}
