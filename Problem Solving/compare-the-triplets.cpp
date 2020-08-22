#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i, a[3], b[3], pointa=0, pointb=0;;
    for(i=0;i<3;i++)
        cin>>a[i];
    for(i=0;i<3;i++)
        cin>>b[i];
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            pointa++;
        if(a[i]<b[i])
            pointb++;
    }
    cout<<pointa<<" "<<pointb;
}
