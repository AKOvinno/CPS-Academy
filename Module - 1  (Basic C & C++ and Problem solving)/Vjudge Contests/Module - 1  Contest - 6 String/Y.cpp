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
        string str;
        cin >> str;
        int part1 = 0, part2 = 0;
        for(int i = 0; str[i] != '\0'; i++) {
            if(i < 3) {
                part1 += (str[i] - 48);
            }
            else {
                part2 += (str[i] - 48);
            }
        }
        if(part1 == part2) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}

