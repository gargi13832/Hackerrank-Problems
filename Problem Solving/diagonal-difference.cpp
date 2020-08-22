#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n][n], i, j;
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      cin >> arr[i][j];
    }
  }
  int sum1 = 0, sum2 = 0;
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      if (i == j)
        sum1 = sum1 + arr[i][j];
      if (i + j + 1 == n)
        sum2 = sum2 + arr[i][j];
    }
  }
  if (sum1 - sum2 >= 0)
    cout << sum1 - sum2;
  else
    cout << sum2 - sum1;
}
