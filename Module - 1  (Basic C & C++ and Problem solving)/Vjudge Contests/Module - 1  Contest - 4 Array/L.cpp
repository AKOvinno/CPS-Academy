#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, missing_sum = 0;
    cin >> n;
    long long int ara[n-1];
    long long int sum = (n * (n + 1)) / 2;

    for(int i = 0; i < n-1; i++) {
        cin >> ara[i];
        missing_sum += ara[i];
    }
    cout << sum - missing_sum << "\n";
    return 0;
}
