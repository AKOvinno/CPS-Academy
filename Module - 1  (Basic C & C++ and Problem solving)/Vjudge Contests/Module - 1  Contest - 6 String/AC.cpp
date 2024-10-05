#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int n, rep = 1, ans = 0;
    cin >> n;
    char str[n+1];
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    int cnt[26];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 0; i < n; i++) {
        if(str[i] == str[i+1]) rep++;
        else {
            if(rep > cnt[str[i] - 97]) {
                cnt[str[i]-97] = rep;
            }
            rep = 1;
        }
    }
    for(int i = 0; i < 26; i++) {
        if(cnt[i] > 0) {
            ans += cnt[i];
        }
    }
    cout << ans << "\n";
    return 0;
}

