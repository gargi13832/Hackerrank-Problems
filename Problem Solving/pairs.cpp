#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,diff;
    cin>>n;
    vector<int> vec(n);

    cin>>diff;
    for(int i=0;i<n;i++)
        cin>>vec[i];

    int count = 0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.count(vec[i])){
            count = count + mp[vec[i]];
        }
        mp[diff + vec[i]]++;
        mp[vec[i] - diff]++;
    }

    cout<<count<<endl;
    return 0;
}

