#include <stdio.h>
#include <math.h>

int rzutowaniezamienianie(int a);

int main()
{
	int a;
	
	printf("Podaj liczbe: ");
	scanf("%d", &a);
	rzutowaniezamienianie(a);

	return 0;
}
	
int rzutowaniezamienianie(int a)
{
	int liczby;
	int pom = 1;

	for(int i=sizeof(a); i>=0; i--)
	{
		if(i == sizeof(a))
		{
		liczby = a%10;
		}
		else
		{
		liczby = a/pom%10;
		}
		pom = pom*10;
		printf("%d", liczby);
	}

	return 0;
}
