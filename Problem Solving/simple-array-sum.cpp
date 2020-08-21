#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,sum=0,temp;
    cin>>n;
    while(n--){
        cin>>temp;
        sum = sum + temp;
    }
    cout<<sum;
    return 0;
}
