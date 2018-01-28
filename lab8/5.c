#include <stdio.h>
#include <scisnij.c>

void scisnij(char s[], char c[]) {
  int i, j, x, y = 0;
  //for(int k = 0; k <= 5; k++){
  for(i=j=0; s[i]!='\0'; i++){
    for(x=0; c[x]!='\0'; x++){
		if(s[i]==c[x]){y++;}
	}
    if(y == 0){
      s[j++]=s[i];
  }
  y = 0;
}
s[j]='\0';
}

int main() {
  char src[] = "abrakadabra";
  char dst[] = "ad";
  scisnij(src, dst);
  printf("%s\n", src);
  return 0;
}

