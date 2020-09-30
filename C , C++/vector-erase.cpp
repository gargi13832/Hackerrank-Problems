#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,k;
    cin>>n;
    vector<int> vec;
    for(i=0;i<n;i++)
    {
        cin>>k;
        vec.push_back(k);
    }
    int minus,pos1,pos2;
    cin>>minus;
    vec.erase(vec.begin()+minus-1);
    cin>>pos1;
    cin>>pos2;
    //cout<<pos2-pos1+1<<endl;
    vec.erase(vec.begin()+pos1-1,vec.begin()+pos2-1);
    cout<<vec.size()<<endl;
    for(int x:vec)
        cout<<x<<" ";
    return 0;
}

