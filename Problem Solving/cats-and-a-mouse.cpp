#include<bits/stdc++.h>

using namespace std;

int catAndMouse(int x, int y, int z)
{
    int a,b;
    a=z-x;
    if(a<0)
        a=a-2*a;
    b=z-y;
    if(b<0)
        b=b-2*b;
    if(a<b)
        cout<<"Cat A"<<endl;
    else if(b<a)
        cout<<"Cat B"<<endl;
    else
        cout<<"Mouse C"<<endl;
    return 0;
}
int main()
{
    int q;
    cin>>q;
    int arr[3];
    int i,x,y,z,j;
    for(i=0;i<q;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[j];
        }
        x=arr[0];
        y=arr[1];
        z=arr[2];
        catAndMouse(x,y,z);
    }
}

