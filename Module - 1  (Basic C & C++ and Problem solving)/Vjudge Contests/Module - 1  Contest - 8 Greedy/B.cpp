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
        int n, k, cnt = 0;
        cin >> n >> k;
        string str;
        cin >> str;
        for(int i = 0; i < n; i++) {
            if(str[i] == 'B') {
                i += (k-1);
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}

