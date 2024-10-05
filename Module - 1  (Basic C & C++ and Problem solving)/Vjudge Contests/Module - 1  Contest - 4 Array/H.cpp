#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    int j = r;
    for(int i = p; i <= q; i++) {
        swap(ara[i-1], ara[j-1]);
        j++;
    }
    for(int i = 0; i < n; i++) {
        cout << ara[i] << " ";
    }
    return 0;
}
