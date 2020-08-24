#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, item;
    cin>>n>>item;
    int arr[n],i,sum = 0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(i!=item){
            sum = sum+arr[i];
        }
    }
    sum = sum/2;
    int total;
    cin>>total;
    if(total == sum)
        cout<<"Bon Appetit";
    else
        cout<<total-sum;
    return 0;
}

