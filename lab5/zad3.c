#include <stdio.h>
#include <math.h>

int doskonale(int a);

int main()
{
	int a;
	
	printf("Podaj liczbe: ");
	scanf("%d", &a);
	doskonale(a);

	return 0;
}
int doskonale(int a)
{
	int czyjest = 0;
	
	for(int i=1; i<a; i++)
	{
		if(a%i==0){czyjest=czyjest+i;}
		
	}
	if(czyjest == a){printf("Liczba %d jest doskonala\n", a);}
	else {printf("Liczba %d nie jest doskonala\n", a);}
	
	for(int i=1; i<=10000; i++)
	{
		czyjest = 0;
		for(int j=1; j<i; j++)
		{
			if(i%j==0){czyjest=czyjest+j;}
		
		}
		if(i == 1){printf("Liczby doskonale mniejsze od 10 000: ");}
		if(czyjest == i){printf(" %d ", i);}
		
	}
	
	return 0;
}
