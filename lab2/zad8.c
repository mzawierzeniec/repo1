#include <stdio.h>

int main()
{
	int liczba1, liczba2, liczba3, suma, iloczyn;
	printf("Wprowadz trzy liczby calkowite: ");
	scanf("%d%d%d", &liczba1, &liczba2, &liczba3);
	suma = liczba1+liczba2+liczba3;
	printf("Suma wynosi: %d\n", suma);
	iloczyn = liczba1*liczba2*liczba3;
	printf("Iloczyn wynosi: %d\n", iloczyn);
	if((liczba1>liczba2) && (liczba1>liczba3)){printf("Najwieksza liczba to: %d\n", liczba1);}
	else if((liczba2>liczba1) && (liczba2>liczba3)){printf("Najwieksza liczba to: %d\n", liczba2);}
	else if((liczba3>liczba1) && (liczba3>liczba2)){printf("Najwieksza liczba to: %d\n", liczba3);}
	
	if((liczba1<liczba2) && (liczba1<liczba3)){printf("Najmniejsza liczba to: %d\n", liczba1);}
	else if((liczba2<liczba1) && (liczba2<liczba3)){printf("Najmniejsza liczba to: %d\n", liczba2);}
	else if((liczba3<liczba1) && (liczba3<liczba2)){printf("Najmniejsza liczba to: %d\n", liczba3);}
	return 0;
}
