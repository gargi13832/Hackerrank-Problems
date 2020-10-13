#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string str;
    cin>>str;
    ll i, len = str.length(),count=0,k,c=0,repeat=0;
    cin>>k;
    if(len == 1 && str[0]=='a')
        cout<<k;
    else if(len == 1 && str[0]!='a')
        cout<<0;
    else{
        for(i=0;i<len;i++){
            if(str[i]=='a')
                count++;
        }
        repeat = (k/len)*count;
        int remain = k%len;
        for(i=0;i<=remain-1;i++){
            if(str[i]=='a')
            c++;
        }
        cout<<repeat+c<<endl;
    }
}
