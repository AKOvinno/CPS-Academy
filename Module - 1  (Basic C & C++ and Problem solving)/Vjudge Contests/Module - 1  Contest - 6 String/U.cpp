#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0, i = 1;
        cin >> n;
        int temp = n;
        while(temp) {
            if(temp % 10 > 0) {
                cnt++;
            }
            temp /= 10;
        }
        cout << cnt << "\n";
        while(n) {
            if(n % 10 > 0) {
                cout << i*(n%10) << " ";
            }
            i*=10;
            n/=10;
        }
        cout << "\n";
    }
    return 0;
}

