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
        int n, flag = 0;
        cin >> n;
        int ara[n+1];
        for(int i = 1; i <= n; i++) {
            cin >> ara[i];
        }
        for(int i = 1; i <= n; i++) {
            if(ara[i] <= i) flag = 1;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

