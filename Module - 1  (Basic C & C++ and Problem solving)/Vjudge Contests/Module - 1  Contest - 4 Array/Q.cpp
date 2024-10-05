#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    for(int i = 0; i < n; i++) {
        if(ara[i] < l) {
            cout << l << " ";
        }
        else if(ara[i] >= l && ara[i] <= r) {
            cout << ara[i] << " ";
        }
        else if(ara[i] > r) {
            cout << r << " ";
        }
    }
    return 0;
}
