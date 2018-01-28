#include <stdio.h>

void fill_rand(int *tablica) {
	for(int i = 0; i<=511; i++)
	{
		tablica[i] = 128;
	}
}

void show_array(int *tablica) {
	for(int i = 0; i<=511; i++)
	{
		printf("%d\n", tablica[i]);
	}
}

int main() {
    int tablica[512];

    fill_rand(tablica);
	show_array(tablica);
    return 0;
}
