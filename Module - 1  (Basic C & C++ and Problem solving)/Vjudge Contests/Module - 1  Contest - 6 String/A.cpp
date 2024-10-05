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
        int flag = 0;
        cin >> str;
        if(str[0] == 'y' || str[0] == 'Y') {

        }
        else {
            flag = 1;
        }
        if(str[1] == 'e' || str[1] == 'E') {

        }
        else {
            flag = 1;
        }
        if(str[2] == 's' || str[2] == 'S') {

        }
        else {
            flag = 1;
        }
        if(flag) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}
