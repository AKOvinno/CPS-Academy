#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ara[4*n];
    for(int i = 0; i < 4*n-1; i++) {
        cin >> ara[i];
    }
    int ans = ara[0];
    for(int i = 1; i < 4*n-1; i++) {
        ans ^= ara[i];
    }
    cout << ans << "\n";
    return 0;
}

