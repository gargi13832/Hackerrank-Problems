#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int i;
    int len = s.length(),words=0;
    for(i=0;i<len;i++){
        //cout<<s[i]-'A'<<endl;
        if((s[i]-'A'>=0)&&(s[i]-'A'<=25))
            words++;
    }
    words = words+1;
    return words;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    cout << result << "\n";

    fout.close();

    return 0;
}
