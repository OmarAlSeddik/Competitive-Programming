#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, min1, min2;
        long long count = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (!i || a[i] < min1) min1 = a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (!i || b[i] < min2) min2 = b[i];
        }
        for (int i = 0; i < n; i++) {
            int diff1 = a[i] - min1;
            int diff2 = b[i] - min2;
            count += max(diff1, diff2);
        }
        cout << count;
        if (t) cout << "\n";
    }
    return 0;
}