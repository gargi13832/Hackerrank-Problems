#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int len = s.length(),i,level = 0,val=0;
    for(i=0;i<len;i++){
        if(s[i]=='U')
            level++;
        else if(s[i]=='D')
            level--;
        if(level==0 && s[i]=='U')
            val++;
    }
    return val;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

