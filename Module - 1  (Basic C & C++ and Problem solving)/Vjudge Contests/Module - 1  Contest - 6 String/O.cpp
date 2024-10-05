#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n, pos = -1, left = -1, right = -1;
    cin >> n;
    char str[n+1];
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        if(str[i] == '*') pos = i;
    }
    str[n] = '\0';
    if(pos == n-1 || pos == 0) {
        cout << "out\n";
        return 0;
    }
    for(int i = 0; i < n; i++) {
        if(str[i] == '|' && left == -1) {
            left = i;
        }
        else if(str[i] == '|' && left != -1) {
            right = i;
        }
    }
    if(pos > left && pos < right) {
        cout << "in\n";
    }
    else {
        cout << "out\n";
    }
    return 0;
}
