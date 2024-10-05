#include<bits/stdc++.h>
using namespace std;
#define num 8
int main()
{
    int ara[num];
    for(int i = 0; i < num; i++) {
        cin >> ara[i];
    }
    int flag = 0;
    if(ara[0] < 100 || ara[0] > 675 || ara[0] % 25 != 0) {
        flag = 1;
    }
    for(int i = 1; i < num; i++) {
        if(ara[i] < 100 || ara[i] > 675 || ara[i] % 25 != 0) {
            flag = 1;
        }
        if(ara[i] < ara[i-1]) {
            flag = 1;
        }
    }
    if(flag) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
    }
    return 0;
}
