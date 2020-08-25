#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i,j,count=0,update=101;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=update;
                count++;
                update++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}
