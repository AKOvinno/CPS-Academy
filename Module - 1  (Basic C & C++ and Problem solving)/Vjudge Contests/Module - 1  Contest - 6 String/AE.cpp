#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int odd = 0, odd_char = -1;
    string str;
    cin >> str;
    int len = str.length();
    int cnt[26];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 0; str[i] != '\0'; i++) {
        cnt[str[i] - 65]++;
    }
    for(int i = 0; i < 26; i++) {
        if(cnt[i] > 0) {
            if(cnt[i] % 2 == 1) {
                odd++;
                odd_char = i;
            }
        }
    }
    if(odd > 1) {
        cout << "NO SOLUTION\n";
    }
    else {
        for(int i = 0; i < 26; i++) {
            if(cnt[i] > 0 && cnt[i] % 2 == 0) {
                int num = cnt[i] / 2;
                cnt[i] -= num;
                while(num--) {
                    cout << (char)(i+65);
                }
            }
        }
        if(odd_char > -1) {
                for(int i = 0; i < cnt[odd_char]; i++) {
                    cout << (char) (odd_char+65);
            }
            cnt[odd_char] = 0;
        }
        for(int i = 25; i >= 0; i--) {
            while(cnt[i]--) {
                cout << (char)(i+65);
            }
        }
        cout << "\n";
    }
    return 0;
}

