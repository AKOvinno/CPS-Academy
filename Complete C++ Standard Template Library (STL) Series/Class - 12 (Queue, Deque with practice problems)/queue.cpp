#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    // Declaration
    queue<int> q;
    // Insertion
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // First Element
    cout << "First Element: " << q.front() << "\n";
    // Last Element
    cout << "Last Element: " << q.back() << "\n";
    // Removing first element with pop()
    q.pop();
    cout << "First Element: " << q.front() << "\n";
    // queue size
    cout << "Queue Size: " << q.size() << "\n";
    // Printing queue
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";

    return 0;
}

