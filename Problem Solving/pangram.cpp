#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int arr[27],i,flag=0,len = s.length();
    for(i=0;i<27;i++){
        arr[i]=0;
    }
    for(i=0;i<len;i++){
        if(s[i]==' '){
            arr[26]++;
        }
        else{
            arr[s[i]-'a']++;
        }
    }
    for(i=0;i<26;i++){
        if(arr[i]<=0){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout<<"not pangram";
    else
        cout<<"pangram";
    return 0;
}
