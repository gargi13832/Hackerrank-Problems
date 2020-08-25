#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],i,min=999999,j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]&&((j-i)<min)){
                min = j - i;
            }
        }
    }
    if(min==999999)
        cout<<-1;
    else
        cout<<min;
    return 0;
}
