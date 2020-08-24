#include<iostream>
#include<map>
#define F(n) for(int i=0;i<n;i++)
using namespace std;
#define mp map<int,int>
int main()
{
int year;
cin>>year;

year>=1919?(((year%400==0)||((year%4==0)&&(year%100!=0)))?cout<<"12.09."<<year:cout<<"13.09."<<year):year==1918?cout<<"26.09.1918":(year%4==0)?(cout<<"12.09."<<year):(cout<<"13.09."<<year);

return 0;
}

