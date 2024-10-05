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
        int n = 10, total = 0, cnt = 0;
        char str[n][n+1];
        for(int i = 0; i < n; i++) {
            cin >> str[i];
        }
        for(int k = 0; k < 5; k++) {
            int start = k, finish = n-k;
            for(int i = start; i < finish; i++) {
                for(int j = start; j < finish; j++) {
                    if(i == start || i == finish-1 || j == start || j == finish-1) {
                        if(str[i][j] == 'X') {
                            cnt++;
                        }
                    }
                    total += cnt * (k+1);
                    cnt = 0;
                }
            }
        }
        cout << total << "\n";
    }
    return 0;
}
