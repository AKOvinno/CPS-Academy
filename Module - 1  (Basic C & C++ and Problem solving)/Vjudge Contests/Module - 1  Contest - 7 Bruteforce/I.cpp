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
    while(t--)
    {
        int n;
        cin >> n;
        int tem_n = n;
        int a = 0, b = 0, c = 0;
        if(n >= 28 && c == 0)
        {
            c = 26;
            n -= 26;
            if(n >= 27)
            {
                b = 26;
                a = tem_n - b - c;
            }
            else
            {
                a = 1;
                b = n - 1;
            }
        }
        else
        {
            a = 1;
            b = 1;
            c = n - 2;
        }
        cout << (char)(a+96) << (char)(b+96) << (char)(c+96) << "\n";
    }

    return 0;
}

