#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        long long int n, sum = 0;
        cin >> n;
        int ara[n];
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
        }
        for(int i = 0; i < n; i++) {
            sum += ara[i];
        }
        long long int square = sqrt(sum);
        if(square * square == sum) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
