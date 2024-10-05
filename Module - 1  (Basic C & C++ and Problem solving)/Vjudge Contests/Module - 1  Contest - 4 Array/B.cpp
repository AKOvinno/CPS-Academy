#include<bits/stdc++.h>
using namespace std;

int main()
{
    int weeks;
    cin >> weeks;
    int ara[weeks*7];
    for(int i = 0; i < weeks*7; i++) {
        cin >> ara[i];
    }
    int total_weeks[weeks];
    for(int i = 0; i < weeks; i++) {
        total_weeks[i] = 0;
    }
    int j = 0, counter = 0;
    for(int i = 0; i < weeks*7; i++) {
        total_weeks[j] += ara[i];
        counter++;
        if(counter % 7 == 0) {
            j++;
        }
    }
    for(int i = 0; i < weeks; i++) {
        cout << total_weeks[i] << " ";
    }
    return 0;
}
