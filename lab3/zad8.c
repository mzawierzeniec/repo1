#include <stdio.h>

int main()
{
		int licznik=0;;
	
		for(int j=0; j<4; j++)
		{
			for(int i=0; i<=j; i++)
			{
				putchar('*');
			}
			printf("\n");
		}
		
		for(int j=0; j<=4; j++)
		{
			for(int i=3; i>=j; i--)
			{
				putchar('*');
			}
			printf("\n");
		}
		
		
		for(int j=0; j<=4; j++)
		{
			for(int i=3; i>=j; i--)
			{
				putchar('*');
			}
			printf("\n");
			for(int k=0; k<=licznik; k++){putchar(' ');}
			licznik++;
		}
		
		licznik=2;
		
		for(int j=0; j<4; j++)
		{
			printf("\n");
			for(int k=licznik; k>=0; k--){putchar(' ');}
			licznik--;
			for(int i=0; i<=j; i++)
			{
				putchar('*');
			}
		}

	return 0;
}
