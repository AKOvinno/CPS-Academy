#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int a, b;
    cin >> a >> b;
    if((a >= 1 && b <= 3) || (a >= 4 && b <= 6) || (a >= 7 && b <= 9)) {
       cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    return 0;
}
