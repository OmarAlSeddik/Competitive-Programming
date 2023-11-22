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
        unordered_map<ll, ll> map;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            ans += map[x];
            map[x]++;
        }
        ans += map[1]*map[2];
        cout << ans;
        if (t) cout << "\n";
    }
    return 0;
}