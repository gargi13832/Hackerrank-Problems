#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n], i;
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int a[9], x;
  for (i = 0; i < 9; i++)
    a[i] = 0;
  for (i = 0; i < n; i++) {
    x = arr[i];
    a[x]++;
  }
  int m = 0, c = 0;
  for (i = 8; i >= 0; i--) {
    if (a[i] >= m) {
      m = a[i];
      c = i;
    }
  }
  cout << c;
}
