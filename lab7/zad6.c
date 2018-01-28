#include <stdio.h>
#include <string.h>

void wczytaj_ciag(char *ciag) {
	
	int i = 0;

	while(ciag[i]==' ' || ciag[i]=='\t' || ciag[i]=='\n'){
		i++;
	}
	printf("%p,%c", &ciag[i], ciag[i]);
}

int main() {
	
   printf("Wypisz z ciag znakow: ");
   char ciag[100];
   scanf("%10[0-9a-zA-Z ]", ciag);
   wczytaj_ciag(ciag);
   return 0;
}
