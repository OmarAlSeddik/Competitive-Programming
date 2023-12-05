#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    while (q--) {
        string s;
        int x;
        cin >> s >> x;
        if (s == "lower_bound") {
            int ans = lower_bound(a, a + n, x) - a;
            if (ans == n) cout << "-1\n";
            else cout << ans + 1 << "\n";
        }
        else if (s == "upper_bound") {
            int ans = upper_bound(a, a + n, x) - a;
            if (ans == n) cout << "-1\n";
            else cout << ans + 1 << "\n";
        }
        else if (s == "binary_search") {
            int i = lower_bound(a, a + n, x) - a;
            if (a[i] == x) cout << "found\n";
            else cout << "not found\n";
        }
    }
    return 0;
}