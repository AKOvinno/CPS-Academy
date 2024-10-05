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
        int n1, m1, n2, m2;
        cin >> n1 >> m1;
        int ara1[n1][m1];
        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < m1; j++) {
                cin >> ara1[i][j];
            }
        }
        cin >> n2 >> m2;
        int ara2[n2][m2];
        for(int i = 0; i < n2; i++) {
            for(int j = 0; j < m2; j++) {
                cin >> ara2[i][j];
            }
        }
        int ara3[n1][m2];
        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < m2; j++) {
                ara3[i][j] = 0;
                for(int k = 0; k < m1; k++) {
                    ara3[i][j] += ara1[i][k] * ara2[k][j];
                }
            }
        }
        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < m2; j++) {
                cout << ara3[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
