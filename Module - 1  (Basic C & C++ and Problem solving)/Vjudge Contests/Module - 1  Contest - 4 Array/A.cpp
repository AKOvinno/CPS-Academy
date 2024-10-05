#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int num, value, odd = 0, last_digit;
        cin >> num;
        for(int i = 0; i < num; i++) {
            cin >> value;
            last_digit = value % 10;
            if(last_digit % 2 == 1) {
                odd++;
            }
        }
        cout << odd << "\n";
    }
    return 0;
}
