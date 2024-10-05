#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> ara(n);
    long long int totalSum = 0;

    long long int max_val = 0;
    for (long long int i = 0; i < n; i++) {
        cin >> ara[i];
        totalSum += ara[i];
        max_val = max(max_val, ara[i]);
    }

    // Create a frequency array to count occurrences of each element
    vector<long long int> freq(max_val + 1, 0);
    for (long long int i = 0; i < n; i++) {
        freq[ara[i]]++;
    }

    // Create a cumulative sum of frequencies from right to left
    vector<long long int> greater_sum(max_val + 1, 0);
    for (long long int i = max_val - 1; i >= 0; i--) {
        greater_sum[i] = greater_sum[i + 1] + freq[i + 1] * (i + 1);
    }

    // Output the sum of elements greater than the current element
    for (long long int i = 0; i < n; i++) {
        cout << greater_sum[ara[i]] << " ";
    }

    return 0;
}
