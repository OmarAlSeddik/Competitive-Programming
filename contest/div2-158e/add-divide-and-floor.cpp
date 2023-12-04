#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0, mn, mx;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (i) {
                mn = min(mn, x);
                mx = max(mx, x);
            }
            else {
                mn = x;
                mx = x;
            }
        }
        while (mx > mn) {
            mx = (mx + mn) / 2;
            count++;
        }
        cout << count;
        if (count <= n && count != 0) {
            cout << "\n";
            for (int i = 0; i < count; i++) {
                if (i) cout << " ";
                cout << mn;
            }
        }
        if (t) cout << "\n";
    }
    return 0;
}