#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, ans = 0;
    cin >> n;
    unordered_map<ll, ll> map;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        ans += i - map[x];
        map[x]++;
    }
    cout << ans;
    return 0;
}