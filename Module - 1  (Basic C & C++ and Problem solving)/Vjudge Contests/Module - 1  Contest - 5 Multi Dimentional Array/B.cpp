#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n, m, cnt = 0;
    cin >> n >> m;
    char str[n][m+1];
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(str[i][j] == '#') cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
