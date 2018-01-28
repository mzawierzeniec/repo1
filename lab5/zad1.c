#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b, double wynik);

int main()
{
	double a, b;
	
	printf("Podaj liczbe a: ");
	scanf("%lf", &a);
	printf("Podaj liczbe b: ");
	scanf("%lf", &b);
	przeciwprostokatna(a, b, 0);

	return 0;
}
	
double przeciwprostokatna(double a, double b, double wynik)
{
	wynik = a*a+b*b;

	printf("Wynik: %lf", sqrt(wynik));
	return 0;
}
