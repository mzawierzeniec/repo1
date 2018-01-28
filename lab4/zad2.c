#include <stdio.h>
#include <stdlib.h>
int main() {
  int liczba, pom;
  int jest_pierwsza;
  printf("Podaj liczbe calkowita: ");
  scanf("%d", &liczba);
  for(int i=1; i<=liczba; i++)
  {
	if(liczba % i == 0){pom++;}
  }
  if (pom==2){jest_pierwsza=1;}
  if (liczba == 1)
  {
	  jest_pierwsza=2; 
	  printf("Liczba wynosi 1, nie jest ani pierwsza ani zlozona"); 
	  exit(0);
  }
  else{jest_pierwsza=0;}
  printf("Podana liczba '%d' jest %s\n",
    liczba, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}
