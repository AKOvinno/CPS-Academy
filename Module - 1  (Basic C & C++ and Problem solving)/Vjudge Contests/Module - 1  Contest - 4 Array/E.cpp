#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, flag = 1;
    cin >> n >> d;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    for(int i = 1; i < n; i++) {
        if((ara[i] - ara[i-1]) <= d) {
            cout << ara[i] << "\n";
            flag = 0;
            break;
        }
    }
    if(flag) {
        cout << "-1\n";
    }
    return 0;
}
