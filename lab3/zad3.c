#include <stdio.h>

int main()
{

	int a,b;

	printf("Podaj liczbe a: ");
	scanf("%d", &a);
	printf("Podaj liczbe b: ");
	scanf("%d", &b);
	for(int i=a+1; i<=b-1; i++)
	{
		printf("%d ", i);
	}
	return 0;
}
