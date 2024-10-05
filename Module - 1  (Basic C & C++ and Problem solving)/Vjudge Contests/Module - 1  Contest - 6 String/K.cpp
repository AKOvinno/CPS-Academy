#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n, cnt = 0, a = 0, b = 0, c = 0;
    cin >> n;
    char str[n+1];
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for(int i = 0; i < n; i++) {
        if(str[i] == 'A') a++;
        else if(str[i] == 'B') b++;
        else if(str[i] == 'C') c++;
        cnt++;
        if(a > 0 && b > 0 && c > 0) break;
    }
    cout << cnt << "\n";
    return 0;
}
