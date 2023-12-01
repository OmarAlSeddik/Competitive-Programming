#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, originalDiff = 0, optimalDiff = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            originalDiff += abs(b[i] - a[i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int diff1 = abs(b[i] - a[i]) + abs(b[j] - a[j]);
                int diff2 = abs(b[j] - a[i]) + abs(b[i] - a[j]);
                if (diff2 - diff1 > optimalDiff) optimalDiff = diff2 - diff1;
            }
        }
        cout << originalDiff + optimalDiff;
        if (t) cout << "\n";
    }
    return 0;
}