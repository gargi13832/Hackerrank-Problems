#include <sstream>
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;

/*vector<int> parseInts(string str) {
	// Complete this function
    int len = strlen(str);
    vector<int> vec;
    for(int i =0;i<len;i++)
    {
        if(s[i]!=',')
            vec.push_back(s[i]);
        else

    }
}*/

int main() {
    string str;
    cin >> str;
    //vector<int> integers = parseInts(str);
    //int len = strlen(str);
    for(int i = 0; str[i]!='\0'; i++) {
        if(str[i]!=',')
            cout<<str[i];
        else
            cout<<"\n";
    }

    return 0;
}
