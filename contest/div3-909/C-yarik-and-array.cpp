#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, highest;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                b[i] = a[i];
                highest = b[i];
                continue;
            }
            if (abs(a[i] % 2) != abs(a[i-1] % 2) && b[i-1] > 0) {
                b[i] = b[i-1] + a[i];
            }
            else b[i] = a[i];
            if (b[i] > highest) highest = b[i];
        }
        cout << highest;
        if (t) cout << "\n";
    }
    return 0;
}