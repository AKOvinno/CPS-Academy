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
        int num, cnt = 9;
        cin >> num;
        if(num < 10) {
            cout << num << "\n";
            continue;
        }
        int mul = 10;
        for(int i = 1; i <= 10, i*mul <= num; i++) {
            cnt++;
            if(i == 10) {
                i = 1;
                mul *= 10;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
