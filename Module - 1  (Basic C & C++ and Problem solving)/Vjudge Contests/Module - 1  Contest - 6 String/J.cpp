#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n;
    cin >> n;
    string str = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    for(int i = 0; i < n+2; i++) {
        cout << str[i];
    }
    return 0;
}
