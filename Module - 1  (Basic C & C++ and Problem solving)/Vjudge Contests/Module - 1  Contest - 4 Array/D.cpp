#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, score = 0;
    cin >> n >> m;
    int point[n], solve[m];
    for(int i = 0; i < n; i++) {
        cin >> point[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> solve[i];
    }
    for(int i = 0; i < m; i++) {
        score += point[solve[i]-1];
    }
    cout << score << "\n";
    return 0;
}
