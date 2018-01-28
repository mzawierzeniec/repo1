#define ONE_HOUR 60
#include <stdio.h>

int main()
{
	int minutes, hours = 0;
    printf("Podaj ilosc minut: ");
	scanf("%d", &minutes);
	while(minutes>=60 || minutes<0)
	{
		minutes = minutes - ONE_HOUR;
		if(minutes >=0){hours++;}
		else minutes = ONE_HOUR + minutes;
	}
	printf("%d : %d", hours, minutes);
	
	return 0;
}
