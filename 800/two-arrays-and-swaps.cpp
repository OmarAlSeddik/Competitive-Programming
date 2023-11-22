#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, sum = 0;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < k; i++) {
            if (b[n-1-i] > a[i]) a[i] = b[n-1-i];
        }
        for (int i = 0; i < n; i++) sum += a[i];
        cout << sum;
        if (t) cout << "\n";
    }
    return 0;
}