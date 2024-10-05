#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        int ara[n];
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
        }
        int minimum = ara[0], minimum_index = 0;
        for(int i = 1; i < n; i++) {
            if(minimum > ara[i]) {
                minimum = ara[i];
                minimum_index = i;
            }
        }
        ara[minimum_index] += 1;
        long long int ans = 1;
        for(int i = 0; i < n; i++) {
            ans *= ara[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
