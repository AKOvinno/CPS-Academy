#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--) {
        int n, one = 0, zero = 0;
        cin >> n;
        string str;
        cin >> str;
        for(int i = 0; i < n; i++) {
            if(str[i] == '1') one++;
            else if(str[i] == '0') zero++;
        }
        if(zero == 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }

    return 0;
}

