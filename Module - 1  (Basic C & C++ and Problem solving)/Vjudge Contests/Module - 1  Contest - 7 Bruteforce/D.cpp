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
        int l, r, cnt = 0;
        cin >> l >> r;
        for(int i = l; i <= r; i++) {
            if(i % 10 == 2 || i % 10 == 3 || i % 10 == 9) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}

