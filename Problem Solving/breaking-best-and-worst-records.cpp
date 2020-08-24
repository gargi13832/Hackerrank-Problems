#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ll n,i,max=0,min=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    max=a[0],min=a[0];
    ll cmin=0,cmax=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            cmax++;
        }
        if(a[i]<min)
        {
            min=a[i];
            cmin++;
        }
    }
    cout<<cmax<<" "<<cmin;
    return 0;
}

