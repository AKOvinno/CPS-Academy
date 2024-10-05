#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n, m, final_cnt = 0, flag = 0, temp_cnt = 0;
    cin >> n >> m;
    char str[n][m+1];
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            if(str[i][j] == 'x') {
                temp_cnt = 0;
                flag = 1;
                break;
            }
        }
        if(!flag) {
                temp_cnt++;
            }
        else {
            flag = 0;
        }
        if(temp_cnt > final_cnt) {
                final_cnt = temp_cnt;
            }
    }
    cout << final_cnt << "\n";
    return 0;
}
