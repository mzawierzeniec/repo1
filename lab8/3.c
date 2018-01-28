#include <stdio.h>

int main()
{
	int first, second, sum = 0;
    printf("Podaj pierwsza liczbe: ");
	scanf("%d", &first);
    printf("Podaj druga liczbe: ");
	scanf("%d", &second);
	for(int i=first; i<=second; i++)
	{
		sum = sum + i;
	} 
	
    printf("Wynik: %d", sum);	
	
	return 0;
}
