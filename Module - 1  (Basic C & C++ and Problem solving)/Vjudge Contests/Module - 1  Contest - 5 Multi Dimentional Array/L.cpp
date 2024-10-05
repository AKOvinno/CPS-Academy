#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    int flag = 0;
    int ara[9][9];
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> ara[i][j];
        }
    }
    int cnt[10];
    memset(cnt, 0, sizeof(cnt));
    // Checking rows
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cnt[ara[i][j]] = 1;
        }
        for(int k = 1; k < 10; k++) {
            if(cnt[k] != 1) {
                flag = 1;
            }
        }
        memset(cnt, 0, sizeof(cnt));
    }
    // Checking columns
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cnt[ara[j][i]] = 1;
        }
        for(int k = 1; k < 10; k++) {
            if(cnt[k] != 1) {
                flag = 1;
            }
        }
        memset(cnt, 0, sizeof(cnt));
    }
    // Checking first cube
    for(int i = 0; i < 3; i++) {
        for(int j = 3; j < 6; j++) {
            cnt[ara[i][j]] = 1;
        }
    }
    for(int k = 1; k < 10; k++) {
        if(cnt[k] != 1) {
            flag = 1;
        }
    }
    memset(cnt, 0, sizeof(cnt));
    // Checking second cube
    for(int i = 0; i < 3; i++) {
        for(int j = 3; j < 6; j++) {
            cnt[ara[i][j]] = 1;
        }
    }
    for(int k = 1; k < 10; k++) {
        if(cnt[k] != 1) {
            flag = 1;
        }
    }
    memset(cnt, 0, sizeof(cnt));
    // Checking third cube
    for(int i = 0; i < 3; i++) {
        for(int j = 6; j < 9; j++) {
            cnt[ara[i][j]] = 1;
        }
    }
    for(int k = 1; k < 10; k++) {
        if(cnt[k] != 1) {
            flag = 1;
        }
    }
    memset(cnt, 0, sizeof(cnt));
    // Checking forth cube
    for(int i = 3; i < 6; i++) {
        for(int j = 0; j < 3; j++) {
            cnt[ara[i][j]] = 1;
        }
    }
    for(int k = 1; k < 10; k++) {
        if(cnt[k] != 1) {
            flag = 1;
        }
    }
    memset(cnt, 0, sizeof(cnt));
    // Checking fifth cube
    for(int i = 3; i < 6; i++) {
        for(int j = 3; j < 6; j++) {
            cnt[ara[i][j]] = 1;
        }
    }
    for(int k = 1; k < 10; k++) {
        if(cnt[k] != 1) {
            flag = 1;
        }
    }
    memset(cnt, 0, sizeof(cnt));
    // Checking sixth cube
    for(int i = 3; i < 6; i++) {
        for(int j = 6; j < 9; j++) {
            cnt[ara[i][j]] = 1;
        }
    }
    for(int k = 1; k < 10; k++) {
        if(cnt[k] != 1) {
            flag = 1;
        }
    }
    memset(cnt, 0, sizeof(cnt));
    // Checking seventh cube
    for(int i = 6; i < 9; i++) {
        for(int j = 0; j < 3; j++) {
            cnt[ara[i][j]] = 1;
        }
    }
    for(int k = 1; k < 10; k++) {
        if(cnt[k] != 1) {
            flag = 1;
        }
    }
    memset(cnt, 0, sizeof(cnt));
    // Checking eighth cube
    for(int i = 6; i < 9; i++) {
        for(int j = 3; j < 6; j++) {
            cnt[ara[i][j]] = 1;
        }
    }
    for(int k = 1; k < 10; k++) {
        if(cnt[k] != 1) {
            flag = 1;
        }
    }
    memset(cnt, 0, sizeof(cnt));
    // Checking ninth cube
    for(int i = 6; i < 9; i++) {
        for(int j = 6; j < 9; j++) {
            cnt[ara[i][j]] = 1;
        }
    }
    for(int k = 1; k < 10; k++) {
        if(cnt[k] != 1) {
            flag = 1;
        }
    }
    memset(cnt, 0, sizeof(cnt));
    if(flag) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
    }
    return 0;
}

