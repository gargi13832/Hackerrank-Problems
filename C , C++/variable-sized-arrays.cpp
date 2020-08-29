#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int ll;
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll n,q,sz;
    cin>>n>>q;
    //vector<vector<ll>> vec;
    vector<vector<ll> > vec;
    for(ll i=0;i<n;i++){
        cin>>sz;
        vector<ll> temp(sz);
        for(ll j=0;j<sz;j++)
            cin>>temp[j];

        vec.push_back(temp);
    }
    ll a,b;
    for(ll i=0;i<q;i++){
    cin>>a>>b;
    cout<<vec[a][b]<<endl;
    }
    return 0;
}

