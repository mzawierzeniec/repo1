#include <stdio.h>

void scisnij(char s[], char c[]);

int main() {
  char src[] = "abrakadabra";
  char dst[] = "ad";
  scisnij(src, dst);
  printf("%s\n", src);
  return 0;
}

