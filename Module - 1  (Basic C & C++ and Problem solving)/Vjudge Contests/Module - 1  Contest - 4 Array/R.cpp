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
    cout << ara[0] << " ";
    for(int i = 1; i < n; i++) {
        cout << ara[i] - ara[i-1] << " ";
    }
    return 0;
}
