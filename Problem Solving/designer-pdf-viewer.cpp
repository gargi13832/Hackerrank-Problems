#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[26],i,max=0;
    for(i=0;i<26;i++){
        cin>>arr[i];
    }
    string str;
    cin>>str;
    int len = str.length();
    //int size_str[len];
    for(i=0;i<len;i++){
        if(arr[str[i]-'a']>max)
            max = arr[str[i]-'a'];
    }
    //cout<<max<<" "<<len<<endl;
    cout<<len*max;
    return 0;
}

