#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, ans = 0;
        cin >> n;
        ll a[n+1] = {0};
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (i) a[i] += a[i-1];
        }
        for (int i = 1; i < n; i++) {
            if (n % i) continue;
            ll mn = 1e18, mx = 0;
            for (int j = i; j <= n; j += i) {
                mx = max(mx, a[j] - a[j-i]);
                mn = min(mn, a[j] - a[j-i]);
            }
            ans = max(ans, mx - mn);
        }
        cout << ans;
        if (t) cout << "\n";
    }
    return 0;
}