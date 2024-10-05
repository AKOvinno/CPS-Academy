#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    for(int i = 0; i < n; i++) {
        cout << ara[i] << " ";
        if(abs(ara[i] - ara[i+1]) > 1 && i < n-1) {
            if(ara[i] < ara[i+1]) {
                int start = ara[i] + 1, endt = ara[i+1];
                for(int i = start; i < endt; i++) {
                    cout << i << " ";
                }
            }
            else {
                int start = ara[i] - 1, endt = ara[i+1];
                for(int i = start; i > endt; i--) {
                    cout << i << " ";
                }
            }
        }
    }
    return 0;
}
