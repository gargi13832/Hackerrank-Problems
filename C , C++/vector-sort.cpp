#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> vec;
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for (int x : vec)
        cout << x << " ";
    return 0;
}

