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
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        int right = 0, left = 0;
        for(int i = 0; i < 3; i++) {
            if(a[i] == 1) {
                right = 1;
            }
            else if(a[i] == 0) {
                left = 1;
            }
        }
        cout << (right && left) << "\n";
    }

    return 0;
}

