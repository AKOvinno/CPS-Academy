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
        string str;
        cin >> str;
        int cnt = 0;
        if(str[0] != 'a') cnt++;
        if(str[1] != 'b') cnt++;
        if(str[2] != 'c') cnt++;
        if(cnt == 3) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}
