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
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '0') cout << "1";
        else if(str[i] == '1') cout << "0";
    }
    return 0;
}
