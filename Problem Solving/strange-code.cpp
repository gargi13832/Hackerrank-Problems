#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
// Complete the strangeCounter function below.
ll strangeCounter(ll t) {
    /*ll time = 1, value = 3, value_temp = value;
    for(time = 1; time!=t;time++){
        if(value_temp!=1){
            value_temp--;
        }
        else{
            value = value * 2;
            value_temp = value;
        }
    }
    return value_temp;*/
    long n = ceil(log2(ceil((double)t/3) + 1));
    long start = 3*(pow(2,n-1)-1) +1;
    long gap = t-start;
    long corresponding = 3*(pow(2,n-1));
    //cout<<"n "<<n<<" start "<<start<<" gap "<<gap<<" cooore "<<corresponding<<endl;
    return corresponding - gap;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    ll t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    ll result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}

