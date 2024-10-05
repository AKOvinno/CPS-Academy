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
    int len = str.length(), flag = 0;
    int ara[len];
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        ara[j] = str[i] - 48;
        j++;
    }
    for(int i = 1; i < len; i++) {
        if(ara[i] >= ara[i-1]) {
            flag = 1;
            break;
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
