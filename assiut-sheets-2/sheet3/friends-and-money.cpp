#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, q;
    cin >> n >> q;
    unordered_map<string, ll> friends;
    for (ll i = 0; i < n; i++) {
        string x;
        ll y;
        cin >> x >> y;
        friends[x] = y;
    }
    while (q--) {
        ll n;
        string s;
        cin >> n >> s;
        if (n == 1) {
            ll v;
            cin >> v;
            friends[s] += v;
        }
        else cout << friends[s] << "\n";
    }
    return 0;
}