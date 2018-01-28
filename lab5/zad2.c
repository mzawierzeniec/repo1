#include <stdio.h>
#include <math.h>

int silnia(int a);

int main()
{
	int a;
	
	printf("Podaj liczbe: ");
	scanf("%d", &a);
	silnia(a);

	return 0;
}
	
int silnia(int a)
{
	int pom = 1;
	if(a==0){printf("Silnia wynosi 1");}
	else if(a>0)
	{
		for(int i=1; i<=a; i++)
		{
			pom = pom * i;
		}
		printf("Silnia wynosi: %d", pom);
	}
	pom = 1;
	for(int i=1; i<10; i++)
	{
		pom = pom * i;
	}
		printf("\nSilnia 10 pierwszych liczb naturalnych wynosi: %d", pom);
	return 0;
}
