#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand(int *tablica, int *range) {
	time_t t;
	srand((unsigned) time(&t));
	int ile = *range - 1;
	for(int i = 0; i<=ile; i++)
	{
		tablica[i] = rand()%100;
	}
}

void show_array(int *tablica, int *range) {
	int ile = *range - 1;
	int min = tablica[0];
	int max = tablica[0];
	int roznica;
	for(int i = 0; i<=ile - 1; i++)
	{
		if(min > tablica[i+1]){min = tablica[i+1];}
		if(max < tablica[i+1]){max = tablica[i+1];}
		printf("%d\n", tablica[i]);
		if(i == ile -1){printf("%d\n", tablica[ile]);}
	}
	printf("Najmniejszy element wyosi: %d\n", min);
	printf("Najwiekszy element wynosi: %d\n", max);
	roznica = max - min;
	printf("Roznica wynosi: %d", roznica);
}

int main() {
	int rne;
	printf("Podaj wielkosc tablicy: ");
	scanf("%d", &rne);
    int tablica[rne];

    fill_rand(tablica, &rne);
	show_array(tablica, &rne);
    //printf("Kwadrat wczytanej liczby to %d\n", liczba);
    return 0;
}
