#include <stdio.h>

int potega(int n, int k) {
	if(k <= 1) {
      return 1;
    }
	return n * potega(n, k-1);
	
}

int main() {
	int n, k;
    printf("Podaj n: ");
	scanf("%d", &n);
    printf("Podaj k: ");
	scanf("%d", &k);
    printf("%d\n", potega(n, k+1));
   return 0;
}

