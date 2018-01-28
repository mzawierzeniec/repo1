#define ONE_WEEK 7
#include <stdio.h>

int main()
{
	int days, weeks = 0;
    printf("Podaj liczbe dni: \n");
	scanf("%d", &days);
	while(days>=7 || days<0)
	{

		days = days - ONE_WEEK;
		if(days >=0){weeks++;}
		else days = ONE_WEEK + days;
		
		if(days>=0 && days<7)
		{
			days = days - ONE_WEEK;
			if(days >=0){weeks++;}
			else days = ONE_WEEK + days;
			printf("Tygodnie: %d Dni: %d\n", weeks, days);
			weeks = 0;
			
			printf("Podaj liczbe dni: \n");
			scanf("%d", &days);
			if(days <= 0){break;}
		}
	}
	
	return 0;
}

