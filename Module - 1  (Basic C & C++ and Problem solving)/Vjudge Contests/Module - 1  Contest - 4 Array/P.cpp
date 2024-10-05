#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    bool called[n+1];
    for(int i = 0; i < n+1; i++) {
        called[i] = false;
    }
    for(int i = 0; i < n; i++) {
        if(!called[i+1]) {
            called[ara[i]] = true;
        }
    }
    for(int i = 1; i < n+1; i++) {
        if(called[i] == 0) k++;
    }
    cout << k << "\n";
    for(int i = 1; i < n+1; i++) {
        if(called[i] == 0) cout << i << " ";
    }
    return 0;
}
