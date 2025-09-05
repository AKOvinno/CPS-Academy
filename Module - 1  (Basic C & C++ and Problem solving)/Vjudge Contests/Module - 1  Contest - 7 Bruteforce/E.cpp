#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    ll  n;
    cin >> n;
    for(ll i = 0; pow(2, i) <= n; i++) {
        for(ll j = 0; pow(3, j) <= n; j++) {
            if(pow(2, i) * pow(3, j) == n) {
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";

    return 0;
}

