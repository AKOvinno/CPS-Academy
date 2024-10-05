#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int n, m, suf = 1, pre = 1;
    cin >> n >> m;
    char sub[n+1];
    char main[m+1];
    for(int i = 0; i < n; i++) {
        cin >> sub[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> main[i];
    }
    for(int i = 0; i < n; i++) {
        if(sub[i] != main[i]) {
            pre = 0;
            break;
        }
    }
    for(int i = m-n, j = 0; i < m, j < n; i++, j++) {
        if(sub[j] != main[i]) {
            suf = 0;
            break;
        }
    }
    if(suf && pre) {
        cout << "0\n";
    }
    else if(pre && !suf) {
        cout << "1\n";
    }
    else if(!pre && suf) {
        cout << "2\n";
    }
    else if(!suf && !pre) {
        cout << "3\n";
    }
    return 0;
}

