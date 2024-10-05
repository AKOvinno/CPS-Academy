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
    char str[n+1];
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for(int i = 0; i < n; i++) {
        if(str[i] == 'a' && (str[i-1] == 'b' || str[i+1] == 'b')) {
            flag = 1;
        }
        else if(str[i] == 'b' && (str[i-1] == 'a' || str[i+1] == 'a')) {
            flag = 1;
        }
    }
    if(flag) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    return 0;
}
