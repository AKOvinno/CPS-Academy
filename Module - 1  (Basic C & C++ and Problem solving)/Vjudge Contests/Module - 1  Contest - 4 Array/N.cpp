#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, flag = 1;
        cin >> n;
        int ara[n];
        int maximum = 0;
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
            if(ara[i] > maximum) {
                maximum = ara[i];
            }
        }
        int cnt_array[maximum+1];
        for(int i = 0; i <= maximum; i++) {
            cnt_array[i] = 0;
        }
        for(int i = 0; i < n; i++) {
            cnt_array[ara[i]]++;
        }
        for(int i = 0; i <= maximum; i++) {
            if(cnt_array[i] >= 3) {
                cout << i << "\n";
                flag = 0;
                break;
            }
        }
        if(flag) {
            cout << -1 << "\n";
        }
    }
    return 0;
}
