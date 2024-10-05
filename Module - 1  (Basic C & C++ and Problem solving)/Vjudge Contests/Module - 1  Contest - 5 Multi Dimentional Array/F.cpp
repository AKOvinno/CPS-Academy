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
        int n;
        cin >> n;
        int a[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        while (top <= bottom && left <= right) {
        // Print top row from left to right
            for (int i = left; i <= right; ++i) {
                cout << a[top][i] << " ";
            }
            top++;

            // Print right column from top to bottom
            for (int i = top; i <= bottom; ++i) {
                cout << a[i][right] << " ";
            }
            right--;

            // Print bottom row from right to left (if exists)
            if (top <= bottom) {
                for (int i = right; i >= left; --i) {
                    cout << a[bottom][i] << " ";
                }
                bottom--;
            }

            // Print left column from bottom to top (if exists)
            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    cout << a[i][left] << " ";
                }
                left++;
            }
        }
        cout << "\n";
    }
    return 0;
}
