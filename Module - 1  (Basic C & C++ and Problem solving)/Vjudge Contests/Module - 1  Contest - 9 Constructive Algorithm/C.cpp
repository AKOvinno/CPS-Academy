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
        int n, flag = 1;
        cin >> n;
        vector <int> ara;
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            ara.push_back(num);
        }
        for(int i = 1; i < n; i++) {
            if(ara[i-1] * 2 > ara[i] * 2) {
                swap(ara[i], ara[i-1]);
            }
        }
        for(int i = 0; i < n; i++) {
            cout << ara[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

