#include <stdio.h>
#include <math.h>


int main()
{
	int a, c, d;
	float b;
	
	printf("Podaj liczbe calkowita: ");
	scanf("%d",&a);
	printf("%d\n", a);
	printf("Podaj liczbe zmiennopozycyjna: ");
	scanf("%f",&b);
	printf("%f\n", b);
	printf("Podaj liczby calkowite oddzielone spacja: ");
	scanf("%d %d",&c, &d);
	printf("%d %d\n", c, d);

	double PI=3.14;
	double deg, rad;
    printf("Podaj kat w stopniach : ");
    scanf("%lf", &deg);
    rad = 2 * PI * deg / 360;  /* grep PI /usr/include/math.h */
    printf("%lf deg = %lf rad\n", deg , rad);

    double licz1, licz2;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &licz1);
    printf("Podaj druga liczbe");
    scanf("%lf", &licz2);
    if (licz1 > licz2)
      printf("%lf", licz1);
      else 
      printf("%lf", licz2);

	return 0;
}

