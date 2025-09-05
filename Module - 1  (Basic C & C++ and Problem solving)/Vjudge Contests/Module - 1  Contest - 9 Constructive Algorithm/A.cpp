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
        int n, k, x, flag = 0, sum = 0, array_size = 0, maxx;
        cin >> n >> k >> x;
        if(n < k || k > x+1) {
            cout << -1 << "\n";
            continue;
        }
        if(k == x) {
            maxx = x-1;
        }
        else {
            maxx = x;
        }
        for(int i = 0; i < k; i++) {
            //cout << i << " ";
            sum += i;
            array_size++;
        }
        while(array_size != n) {
            array_size++;
            //cout << maxx << " ";
            sum += maxx;
        }
        //cout << "\n";
        cout << sum << "\n";
    }

    return 0;
}

