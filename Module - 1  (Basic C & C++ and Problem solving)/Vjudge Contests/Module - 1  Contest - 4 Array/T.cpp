#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, k, flag = 1;
        cin >> n >> k;
        int ara[n];
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
        }
        for(int i = 0; i < n; i++) {
            if(ara[i] == k) {
                cout << "YES\n";
                flag = 0;
                break;
            }
        }
        if(flag) {
            cout << "NO\n";
        }
    }
    return 0;
}
