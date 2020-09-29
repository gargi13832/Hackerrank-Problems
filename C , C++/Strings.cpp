#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a,b;
    cin>>a;
    cin>>b;
    int len1 = a.size();
    cout<<len1<<" ";
    int len2 = b.size();
    cout<<len2;
    cout<<endl;
    string c = a+b;
    cout<<c;
    cout<<endl;
    char arr1[len1], arr2[len2], temp;
    for(int i=0; i<len1; i++)
        arr1[i]=a[i];
    for(int i=0; i<len2; i++)
        arr2[i]=b[i];
    temp = arr1[0];
    arr1[0] = arr2[0];
    arr2[0] = temp;
    for(int i=0;i<len1;i++)
        cout<<arr1[i];
    cout<<" ";
    for(int i=0; i<len2; i++)
        cout<<arr2[i];
    return 0;
}

