#include <stdio.h>

void reverse(char *sentence)
{
   if(*sentence!='\0')
   {   
    reverse(sentence+1);
    printf("%c",*sentence);
	}
}      

int main() {
    char sentence[100] = "abcd";
	reverse(sentence);
   return 0;
}
