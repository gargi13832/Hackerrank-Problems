#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float arr[n],positive=0,negative=0,zero=0;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
            positive++;
        if(arr[i]<0)
            negative++;
        if(arr[i]==0)
            zero++;
    }
    printf("%.6f\n",positive/n);
    printf("%.6f\n",negative/n);
    printf("%.6f\n",zero/n);
}

