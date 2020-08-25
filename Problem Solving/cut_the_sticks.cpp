#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i,cnt=0,j,temp,temp2;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++){
        cnt = 0;
        temp = arr[i];
        for(j=0;j<n;j++){
            //cout<<arr[j]<<" ";
            if(arr[j]!=0){
                arr[j]= arr[j] - temp;
                cnt++;
            }
        }
        if(cnt != temp2)
            cout<<cnt<<endl;
        temp2 = cnt;
    }
    //cout<<endl<<"finale "<<cnt;
    return 0;
}
