#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i,a;
    for(i=0;i<test;i++)
    {
        cin>>a;
        if(a<38)
            cout<<a<<endl;
        else if((a+1)%5==0)
            cout<<a+1<<endl;
        else if((a+2)%5==0)
            cout<<a+2<<endl;
        else
            cout<<a<<endl;
    }
    return 0;
}
