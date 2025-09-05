#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();

    // Declaration
    deque<int>dq;
    // Insertion
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(5);
    dq.push_back(6);
    dq.push_front(7);
    dq.push_back(8);
    // Deque Size
    cout << "Deque Size: " << dq.size() << "\n";
    // Deletion
    dq.pop_front();dq.pop_front();
    dq.pop_back();dq.pop_back();
    // Deque Size
    cout << "Deque Size: " << dq.size() << "\n";
    // Printing Full Deque
    while(!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}
