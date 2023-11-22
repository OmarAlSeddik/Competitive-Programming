#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (i) cout << "\n";
        int mn, mx;
        if (i == 0) {
            mn = a[1] - a[0];
            mx = a[n-1] - a[0];
        } else if (i == n-1) {
            mn = a[n-1] - a[n-2];
            mx = a[n-1] - a[0];
        } else {
            mn = min(a[i] - a[i-1], a[i+1] - a[i]);
            mx = max(a[i] - a[0], a[n-1] - a[i]);
        }
        cout << mn << " " << mx;
    }
    return 0;
}