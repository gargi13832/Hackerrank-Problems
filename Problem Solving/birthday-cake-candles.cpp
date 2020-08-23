#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=0,candles=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=max)
            max=arr[i];
    }
    //cout<<max<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            candles++;
        }
    }
    cout<<candles;
    return 0;
}

