#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int i = 0;
    int len = s.length();
    if(s[8]=='A'){
        if(s[0]=='1'&&s[1]=='2'){
            s[0]='0';
            s[1]='0';
        }
    }
    else if(s[8]=='P'){
        if(s[0]=='1'&&s[1]=='0'){
            s[0]='2';
            s[1]='2';
        }
        if(s[0]=='1'&&s[1]=='1'){
            s[0]='2';
            s[1]='3';
        }
        else if(s[1]=='8'||s[1]=='9'){
            s[0]='2';
            s[1]=s[1]-8;
        }
        else if(s[0]=='0'){
            s[0]='1';
            s[1]=s[1]+2;
        }
    }
    s.resize(8);
    return s;
    /*
     * Write your code here.
     */

}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout<< result << "\n";

    //fout.close();

    return 0;
}

