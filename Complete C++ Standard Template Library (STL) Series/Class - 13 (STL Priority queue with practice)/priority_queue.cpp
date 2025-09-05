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
    priority_queue<int> q;
    // Insertion
    q.push(1);
    q.push(2);
    q.push(2);
    q.push(2);
    q.push(3);
    q.push(4);

    // Most prior value
    cout << "Most prior value: " << q.top() << "\n";
    q.pop();

    // Most prior value
    cout << "Most prior value: " << q.top() << "\n";

    // Printing all elements
    while(!q.empty()) {
        cout << q.top() << "\n";
        q.pop();
    }

    // Priority Queue Size
    cout << "Size: " << q.size() << "\n";

    return 0;
}

