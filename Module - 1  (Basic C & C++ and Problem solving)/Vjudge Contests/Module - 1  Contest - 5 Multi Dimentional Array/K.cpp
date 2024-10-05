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
    char str[n][n+1];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> str[i][j];
        }
    }
    cout << "\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1) {

            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << str[i][j];
        }
        cout << "\n";
    }
    return 0;
}
