#include <stdio.h>
#include <math.h>

int kwadrat(int a, int b);
int owal(int x, int y);
int strzalka(int x, int y);
void obrot(int spacje);
void obrotgw(int spacje);

int main()
{
	double a, b, x, y;
	
	printf("Podaj szerokosc strzalki: ");
	scanf("%lf", &x);
	printf("Podaj wysokosc strzalki: ");
	scanf("%lf", &y);
	strzalka(x, y);	
	
	printf("Podaj dlugosc pierwszego boku kwadratu: ");
	scanf("%lf", &a);
	printf("Podaj dlugosc drugiego boku kwadratu: ");
	scanf("%lf", &b);
	kwadrat(a, b);
	
	printf("Podaj parzysta dlugosc pierwszego boku owalu: ");
	scanf("%lf", &x);
	printf("Podaj parzysta dlugosc drugiego boku owalu: ");
	scanf("%lf", &y);
	owal(x, y);

	return 0;
}
	
void obrot(int spacje)
{
	for(int i=1; i<=spacje; i++)
	{
		printf(" ");
	}
}	

void obrotgw(int spacje)
{
	for(int i=1; i<=spacje; i++)
	{
		printf("*");
	}
}	
	
int kwadrat(int a, int b)
{
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<=b; j++)
		{
			if(i==1 || i ==a)
			{
				printf("*");
		    }
		    else if(j == 1 || j == b)
		    {
				printf("*");
			}
			else {printf(" ");}
		}
		printf("\n");
	}	
	return 0;
}

int owal(int x, int y)
{
	int ilepustych = (x-2)/2;\
	int pom = 2;
	int pom2 = 1;
	for(int i=1; i<=x; i++)
	{
		for(int j=1; j<=y; j++)
		{
			if(j==1 && i == 1)
			{
				if(y>=4){ilepustych=((y-4)/2)+1;}
				obrot(ilepustych);
				printf("**");
		    }
		    else if(j == y && i == x)
		    {
				if(y>=4){ilepustych=((y-4)/2)+1;}
				obrot(ilepustych);
				printf("**");
			}
			else if(i>1 && i<=(y/2))
			{
				if(y>=4){ilepustych=(((y-4)/2)+1)-pom2;}
				obrot(ilepustych);
				pom2++;
				pom+=2;
				ilepustych = ((pom-2)/2)*2;
				printf("*");
				obrot(ilepustych);
				printf("*");
				break;
			}
			else if(i<x && i>=(y/2))
			{
				if(i>((y/2)+1)){pom2--;}
				if(y>=4){ilepustych=(((y-4)/2)+2)-pom2;}
				obrot(ilepustych);
				if(i!=((y/2)+1)){pom-=2;}
				ilepustych = ((pom-2)/2)*2;
				printf("*");
				obrot(ilepustych);
				printf("*");
				break;
			}
		}
		printf("\n");
	}	
	return 0;
}

int strzalka(int x, int y)
{
	int ilepustych = (x-2)/2;\
	int pom = 2;
	int pom2 = 1;
	for(int i=1; i<=x; i++)
	{
		for(int j=1; j<=y; j++)
		{
			if(j==1 && i == 1)
			{
				if(y>=4){ilepustych=((y-4)/2)+1;}
				obrot(ilepustych);
				printf("**");
		    }
			else if(i>1)
			{
				ilepustych=(y/2)-pom2;
				obrot(ilepustych);
				pom2++;
				ilepustych = ((pom-2)/2)*2;
				printf("*");
				obrotgw(ilepustych);
				printf("*");
				break;
			}

		}
		printf("\n");
	}	
	return 0;
}
