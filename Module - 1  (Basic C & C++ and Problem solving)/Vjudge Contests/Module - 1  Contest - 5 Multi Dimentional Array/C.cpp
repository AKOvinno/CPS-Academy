#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n, m;
    cin >> n >> m;
    int ara[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ara[i][j];
        }
    }
    // Transpose matrix
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            cout << ara[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
