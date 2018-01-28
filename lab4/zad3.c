#include <stdio.h>
int main() {
	
  float pi = 4;
  
  for(int i=1; i<=1000000; i++)
  {
	  if(i % 2 == 0)
	  {
		 pi = pi + 4.0/(2*i+1);
	  }
	  else
	  {
		  pi = pi - 4.0/(2*i+1);
	  }
	  //printf("π z sumy 10 liczb wynosi: %f\n", pi);
	  if (i==10){printf("π z sumy 10 liczb wynosi: %f\n", pi);}
	  if (i==100){printf("π z sumy 100 liczb wynosi: %f\n", pi);}
	  if (i==1000){printf("π z sumy 1000 liczb wynosi: %f\n", pi);}
	  if (i==1000000){printf("π z sumy 1000000 liczb wynosi: %f\n", pi);}
  }
  return 0;
}
