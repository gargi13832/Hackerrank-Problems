#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll test;
    cin>>test;
    ll n,k,cnt=0;
    while(test--){
        cin>>n>>k;
        cnt = 0;
        ll arr[n],i;
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<=0){
                cnt++;
            }
        }
        if(cnt>=k)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
