#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll test;
    cin>>test;
    ll n,num,cnt,og;
    while(test--){
        cnt = 0;
        cin>>n;
        og = n;
        while(n){
            num = n%10;
            if(num!=0){
                if(og%num==0)
                    cnt++;
            }
            n = n/10;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
