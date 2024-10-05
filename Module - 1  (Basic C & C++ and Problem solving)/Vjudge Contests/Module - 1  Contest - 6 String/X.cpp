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
        int n, k, total_op = 0;
        cin >> n >> k;
        char str[n+1];
        for(int i = 0; i < n; i++) {
            cin >> str[i];
        }
        for(int i = 0; i < n; ) {
            if(str[i] == 'B') {
                i += k;
                total_op++;
            }
            else {
                i++;
            }
        }
        cout << total_op << "\n";
    }

    return 0;
}

