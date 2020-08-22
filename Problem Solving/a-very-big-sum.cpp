#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int n,i;
  cin >> n;
  unsigned long long a, sum = 0;
  for (i = 0; i < n; i++) {
    cin >> a;
    sum = sum + a;
  }
  cout<<sum;
  return 0;
}
