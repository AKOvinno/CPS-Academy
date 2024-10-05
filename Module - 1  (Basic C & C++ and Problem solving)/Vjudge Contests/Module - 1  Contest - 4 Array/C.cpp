#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    for(int i = n-k; i < n; i++) {
        cout << ara[i] << " ";
    }
    for(int i = 0; i < n-k; i++) {
        cout << ara[i] << " ";
    }
    return 0;
}
