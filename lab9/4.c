#include <stdio.h>

int nwd(int a, int b)
{
    if(b>a)
		return printf("%d", nwd(a, b-a));
	else if(a>b)
		return printf("%d", nwd(a-b, b));
}

int main() {
	int a, b;
	printf("Podaj a: ");
	scanf("%d", &a);
    printf("Podaj b: ");
	scanf("%d", &b);
	nwd(a, b);
	return 0;
}
