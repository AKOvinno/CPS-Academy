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
        int num, flag = 0;
        cin >> num;
        if(num % 7 == 0) {
            cout << num << "\n";
            flag = 1;
        }
        int a = 0, b = 0, c = 0;
        c = num % 10;
        num /= 10;
        if(num) {
            b = num % 10;
            num /= 10;
        }
        if(num) {
            a = num % 10;
            num /= 10;
        }

        int value = (a * 100) + (b * 10);
        for(int i = 0; i < 10, flag == 0; i++) {
            int n = value + i;
            if(n % 7 == 0) {
                cout << n << "\n";
                flag = 1;
                break;
            }
        }
        for(int i = 0; i < 10, flag == 0; i++) {
            int value = (a * 100) + (i * 10) + c;
            if(value % 7 == 0) {
                cout << value << "\n";
                flag = 1;
                break;
            }
        }
        for(int i = 1; i < 10, flag == 0; i++) {
            int value = (i * 100) + (b * 10) + c;
            if(value % 7 == 0) {
                cout << value << "\n";
                flag = 1;
                break;
            }
        }
    }
    return 0;
}
 
