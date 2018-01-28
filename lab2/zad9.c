#include <stdio.h>
#include <math.h>

int main()
{
	int liczbapoczatkowa, liczbakoncowa;
	double pierwiastek;
	double krok = 0.5;
	
	printf("Podaj liczbe poczatkowa: \n");
	scanf("%d", &liczbapoczatkowa);
	printf("Podaj liczbe koncowa: \n");
	scanf("%d", &liczbakoncowa);
	double liczbazeskokiem = liczbapoczatkowa;
	do
	{
		pierwiastek = sqrt(liczbazeskokiem);
		printf("%.4lf   %.4lf\n", liczbazeskokiem, pierwiastek);
		liczbazeskokiem += krok;
	}
	while(liczbazeskokiem != liczbakoncowa+krok);
	
	return 0;
}
