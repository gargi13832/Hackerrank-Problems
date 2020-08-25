#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string strings_xor(string s, string t) {

    string res = "";
    int len = s.size();
    for(int i = 0; i < len; i++) {
        if(s[i] == t[i])
            res[i] = '0';
        else
            res[i] = '1';
    }

    return res;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << strings_xor(s, t) << endl;
    return 0;
}
