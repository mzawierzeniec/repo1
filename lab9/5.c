#include <stdio.h>
#include <math.h>

void wypisz_binarne(int n, int k)
{
	int tab[k];
    int i;
    for(i = 0; i < k; i++){
	tab[k-1-i] = n%2;
	n = n/2;
	}
	for(i=0; i<k; i++) printf("%d", tab[i]);
    printf("\n");
}

void binarne(int n, int k){
	if(n==0) wypisz_binarne(n, k);
	else
	{
		wypisz_binarne(n, k);
		binarne(n-1, k);
	}
}	

int main() {
	int n, k;
    printf("Podaj k: ");
	scanf("%d", &k);
	n = pow(2, k) - 1;
	binarne(n, k);
	return 0;
}
