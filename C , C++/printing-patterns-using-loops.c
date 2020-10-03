#include <stdio.h>

//#define min(a, b) ((a) < (b) ? (a) : (b))

int min(int a, int b) {

  if (a < b)
    return a;
  else
    return b;
}

int main() {
  int n,row,col;
  scanf("%d", &n);
  int len = n * 2 - 1;
  for ( row = 0; row < len; row++) {
    for ( col = 0; col < len; col++) {
      int m = min(row, col);
      m = min(m, len - row - 1);
      m = min(m, len - col - 1);
      printf("%d ", n - m);
    }
    printf("\n");
  }
  return 0;
}
