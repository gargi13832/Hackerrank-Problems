#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char ch;
  scanf("%c", &ch);
  printf("%c", ch);
  char s[100];
  scanf("%s", &s);
  printf("\n%s", s);
  char sen[100];
  scanf(" %[^'\n']s", &sen);
  printf("\n%s", sen);
  return 0;
}
