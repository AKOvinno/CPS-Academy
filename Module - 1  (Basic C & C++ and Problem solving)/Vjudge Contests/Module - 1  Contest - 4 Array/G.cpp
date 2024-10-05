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
    int finale = ara[0];
    for(int i = 1; i < n; i++) {
        if(ara[i] > ara[i-1]) {
            finale = ara[i];
        }
        else {
            break;
        }
    }
    cout << finale << "\n";
    return 0;
}
