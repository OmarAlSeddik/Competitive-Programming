#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int mx;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) mx = a[i];
            else mx = max(mx, a[i] - a[i-1]);
            if (i == n - 1) mx = max(mx, (x - a[i]) * 2);
        }
        cout << mx;
        if (t) cout << "\n";
    }
    return 0;
}