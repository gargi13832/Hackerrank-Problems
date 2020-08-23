#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int i;
  unsigned long long int arr[5], max = 0, min = 100000000000000000000, sum = 0;
  for (i = 0; i < 5; i++) {
    cin >> arr[i];
    sum = sum + arr[i];
    if (arr[i] > max)
      max = arr[i];
    if (arr[i] <= min)
      min = arr[i];
  }
  // cout<<max<<endl<<min<<endl<<sum<<endl;
  cout << sum - max << " ";
  cout << sum - min;
  return 0;
}

