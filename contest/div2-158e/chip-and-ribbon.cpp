#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, count = 0;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i && a[i] < a[i-1]) count += a[i-1] - a[i];
        }
        count += a[n-1] - 1;
        cout << count;
        if (t) cout << "\n";
    }
    return 0;
}