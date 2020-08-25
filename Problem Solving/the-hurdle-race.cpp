#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n],i,max=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max)
            max = arr[i];
    }
    if(max>=k)
        cout<<max-k;
    else
        cout<<0;

    return 0;
}

