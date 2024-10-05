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
        char toRemove;
        toRemove = str[n-1];
        for(int i = 0; i < n; i++) {
            if(str[i] > str[i+1]) {
                toRemove = str[i];
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if(str[i] == toRemove) {
                toRemove = '\0';
                continue;
            }
            cout << str[i];
        }
        cout << "\n";
    }

    return 0;
}

