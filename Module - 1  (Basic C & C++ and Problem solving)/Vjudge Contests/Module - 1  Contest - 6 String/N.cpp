#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n, win_num = 0, a = 0, t = 0;
    cin >> n;
    string str;
    cin >> str;
    if(n % 2 == 0) {
        win_num = n / 2;
    }
    else {
        win_num = (n / 2) + 1;
    }
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'A') a++;
        else if(str[i] == 'T') t++;
        if(a == win_num) {
            cout << "A\n";
            return 0;
        }
        else if(t == win_num) {
            cout << "T\n";
            return 0;
        }
    }
    return 0;
}
