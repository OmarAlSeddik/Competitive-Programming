#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    ll a[n];
    ll updates[n+1] = {0};
    for (int i = 0; i < n; i++) cin >> a[i];
    while (q--) {
        int l, r, v;
        cin >> l >> r >> v;
        updates[l-1] += v;
        updates[r] -= v;
    }
    ll current = 0;
    for (int i = 0; i < n; i++) {
        current += updates[i];
        a[i] += current;
        if (i) cout << " ";
        cout << a[i];
    }
    return 0;
}