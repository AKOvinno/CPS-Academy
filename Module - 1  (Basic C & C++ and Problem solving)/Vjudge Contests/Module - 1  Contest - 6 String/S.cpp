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
    int n = 3;
    while(t--) {
        int pos, total = 0;
        char str[n][n+1];
        for(int i = 0; i < n; i++) {
            cin >> str[i];
            for(int j = 0; j < n; j++) {
                if(str[i][j] == '?') pos = i;
            }
        }
        int total_abc = (int) ('A' + 'B' + 'C');
        for(int i = 0; i < n; i++) {
            total += (int) str[pos][i];
        }
        total = total - 63; /// subtracting question mark

        cout << (char) (total_abc-total) << "\n";
    }

    return 0;
}

