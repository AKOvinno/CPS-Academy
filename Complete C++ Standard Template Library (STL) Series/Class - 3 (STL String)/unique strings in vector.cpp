#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    vector<string> v;
    v.push_back("Ovinno");
    v.push_back("Ovinno");
    v.push_back("Laila");
    v.push_back("Laila");
    v.push_back("Rami");
    v.push_back("Shaila");

    int sz = unique(v.begin(), v.end()) - v.begin();
    for(int i = 0; i < sz; i++) {
        cout << v[i] << "\n";
    }

    return 0;
}

