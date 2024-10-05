#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n, flag = 0;
    cin >> n;
    char s[n+1];
    char t[n+1];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }
    for(int i = 0; i < n; i++) {
        if(s[i] != t[i]) {
            if( (s[i] == '1' || s[i] == 'l') && (t[i] == '1' || t[i] == 'l') ) {}
            else if( (s[i] == '0' || s[i] == 'o') && (t[i] == '0' || t[i] == 'o') ) {}
            else {
                flag = 1;
            }
        }
    }
    if(flag) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
    }
    return 0;
}
