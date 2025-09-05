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
        char ara[3][4];
        int num = 198, char_num = 0;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> ara[i][j];
            }
        }
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                char_num += ara[i][j];
            }
            if(num - char_num == 2) {
                cout << "A\n";
            }
            else if(num - char_num == 3) {
                cout << "B\n";
            }
            else if(num - char_num == 4) {
                cout << "C\n";
            }
            char_num = 0;
        }
    }

    return 0;
}

