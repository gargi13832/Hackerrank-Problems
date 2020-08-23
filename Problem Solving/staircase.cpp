#include <iostream>
using namespace std;
int main() {
  int i, n, j, k;
  cin >> n;
  for (i = 0; i < n; i++) {
    k = i+1;
    while (n - k != 0) {
      cout << " ";
      k++;
    }
    for (j = 0; j <= i; j++) {
      cout << "#";
    }
    cout << endl;
  }
  return 0;
}
