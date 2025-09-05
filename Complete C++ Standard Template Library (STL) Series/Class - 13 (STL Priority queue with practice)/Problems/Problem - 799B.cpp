#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    ll n;
    cin >> n;
    ll p[n], a[n], b[n];
    for(ll i = 0; i < n; i++) {
        cin >> p[i];
    }
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    ll m;
    cin >> m;
    ll c[m];
    for(ll i = 0; i < m; i++) {
        cin >> c[i];
    }
    priority_queue<ll, vector<ll>, greater<ll>>one, two, three;
    for(ll i = 0; i < n; i++) {
        if(a[i] == 1) {
            one.push(p[i]);
        }
        else if(a[i] == 2) {
            two.push(p[i]);
        }
        else if(a[i] == 3) {
            three.push(p[i]);
        }
    }
    for(ll i = 0; i < n; i++) {
        if(b[i] == 1) {
            one.push(p[i]);
        }
        else if(b[i] == 2) {
            two.push(p[i]);
        }
        else if(b[i] == 3) {
            three.push(p[i]);
        }
    }
    for(ll i = 0; i < m; i++) {
        if(c[i] == 1 && !one.empty()) {
            cout << one.top() << " ";
            one.pop();
        }
        else if(c[i] == 2 && !two.empty()) {
            cout << two.top() << " ";
            two.pop();
        }
        else if(c[i] == 3 && !three.empty()) {
            cout << three.top() << " ";
            three.pop();
        }
        else {
            cout << "-1 ";
        }
    }
    cout << "\n";
    return 0;
}

