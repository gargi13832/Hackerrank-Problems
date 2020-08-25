#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    /*int i,j;
    string flag="NO";
    int len1 = s1.length(), len2 = s2.length();
    for(i=0;i<len1;i++){
        for(j=0;j<len2;j++){
            if(s1[i]==s2[j]){
                flag = "YES";
                break;
            }
        }
    }*/
    int alpha[26];
    int len1 = s1.length(), len2 = s2.length(),i;
    string flag = "NO";
    for(i=0;i<26;i++){
        alpha[i]=0;
    }
    for(i=0;i<len1;i++){
        alpha[s1[i]-'a']++;
    }
    for(i=0;i<len2;i++){
        if(alpha[s2[i]-'a']!=0)
            flag = "YES";
    }
    return flag;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

