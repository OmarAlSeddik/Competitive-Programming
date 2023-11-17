#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, highest, lowest;
        cin >> n;
        int a[n];
        int sums[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i) sums[i] = sums[i-1] + a[i];
            else sums[i] = a[i];
        }
        highest = sums[1];
        lowest = sums[1];
        for (int i = 2; i < n; i++) {
            for (int j = 1; i-j > -1; j++) {
                if (n % j == 0 && n != j) {
                    int diff = sums[i] - sums[i-j];
                    if (diff > highest) highest = diff;
                    if (diff < lowest) lowest = diff;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (i) cout << " ";
            cout << sums[i];
        }
        cout << "\n" << highest - lowest;
        if (t) cout << "\n";
    }
    return 0;
}