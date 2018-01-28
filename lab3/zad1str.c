#include <stdio.h>

int main()
{

	int stop = 2010;
	int potega = 2;

	for(int i=0; i<=99; i++)
	{	
		potega = potega*2;
		if(potega < stop)
		{
			printf("%d\n", potega);
		}
		else {break;}
	}
	return 0;
}
