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
        int a, b, minimum = 100;
        cin >> a >> b;
        for(int i = a; i <= b; i++) {
            int num = (i - a) + (b - i);
            if(num < minimum) {
                minimum = num;
            }
        }
        cout << minimum << "\n";
    }

    return 0;
}

