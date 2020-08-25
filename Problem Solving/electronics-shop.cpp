#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int m,n;
    cin>>m>>n;
    int usb[m],keyboard[n],i,j;
    for(i=0;i<m;i++)
        cin>>usb[i];
    for(i=0;i<n;i++)
        cin>>keyboard[i];
    int thresh = -1;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(((usb[i]+keyboard[j])>thresh)&&((usb[i]+keyboard[j])<=k)){
                thresh = usb[i]+keyboard[j];
            }
        }
    }
    cout<<thresh;
    return 0;
}

