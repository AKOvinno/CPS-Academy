#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    string str;
    cin >> str;
    int flag = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(i % 2 == 1) {
            if(str[i] != '0') flag = 1;
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
