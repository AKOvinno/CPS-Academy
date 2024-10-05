#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/// We will change precision as per requirement. Here, it is 10
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define loop(s, f) for(int i = s; i <= f; i++)

int main()
{
    optimize();
    loop(1, 5)
    {
        cout << i << " ";
    }
    cout << "\n";
    double a = 23.45678947;
    cout << setprecision(6)<<a<<endl;
    cout << fixed << setprecision(6)<<a<<endl;
    fraction();
    cout << a << endl;

    return 0;
}
