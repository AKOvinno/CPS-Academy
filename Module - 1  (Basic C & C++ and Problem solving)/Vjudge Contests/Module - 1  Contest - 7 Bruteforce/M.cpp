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
        int n, m, k, cnt = 0;
        cin >> n >> m >> k;
        int left[n];
        int right[m];
        for(int i = 0; i < n; i++) {
            cin >> left[i];
        }
        for(int j = 0; j < m; j++) {
            cin >> right[j];
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(left[i] + right[j] <= k) cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
