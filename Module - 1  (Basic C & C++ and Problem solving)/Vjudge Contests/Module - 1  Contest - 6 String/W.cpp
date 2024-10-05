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
        int n;
        cin >> n;
        char str[n+1];
        for(int i = 0; i < n; i++) {
            cin >> str[i];
        }
        for(int i = 0; i < n; i++) {
            if ( (str[i] == 'b' || str[i] == 'c' || str[i] == 'd') && (str[i+1] == 'b' || str[i+1] == 'c' || str[i+1] == 'd') ) {
                cout << str[i];
                cout << ".";
                continue;
            }
            else if ( (str[i] == 'a' || str[i] == 'e') && (str[i+2] == 'a' || str[i+2] == 'e') ) {
                cout << str[i];
                cout << ".";
                continue;
            }
            cout << str[i];
        }
        cout << "\n";
    }

    return 0;
}

