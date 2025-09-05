#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int isDigitSum(int n)
{
    int sum = 0;
    while(n) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--) {
        int x, k;
        cin >> x >> k;
        for(int i = x; ; i++) {
            if(isDigitSum(i) % k == 0) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}

