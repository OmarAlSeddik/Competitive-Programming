#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    ll a[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i-1];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l-1];
        if (q) cout << "\n";
    }
    return 0;
}