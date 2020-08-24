#include<iostream>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n;
    cin>>k;
    int i,arr[n],j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
                if((arr[i]+arr[j])%k==0)
                {
                    count++;
                }
        }
    }
    cout<<count;
    return 0;
}

