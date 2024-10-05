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
        int n, total = 0;
        cin >> n;
        char str[n+1];
        for(int i = 0; i < n; i++) {
            cin >> str[i];
        }
        int cnt[26];
        for(int i = 0; i < 26; i++) {
            cnt[i] = 0;
        }
        for(int i = 0; i < n; i++) {
            cnt[str[i]-65]++;
        }
        for(int i = 0; i < 26; i++) {
            if(i+1 <= cnt[i]) {
                total++;
            }
        }
        cout << total << "\n";
    }

    return 0;
}

