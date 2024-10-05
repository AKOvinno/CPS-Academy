#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int l, r;
    cin >> l >> r;
    string s;
    cin >> s;
    for(int i = l; l < r; i++) {
        char temp = s[i-1];
        s[i-1] = s[r-1];
        s[r-1] = temp;
        l++;
        r--;
    }
    cout << s << "\n";
    return 0;
}

