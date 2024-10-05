#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int ara[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ara[i][j];
        }
    }
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            sum += ara[i][j];
        }
        cout << sum << "\n";
        sum = 0;
    }
    return 0;
}
