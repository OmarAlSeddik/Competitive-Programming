#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x, aSum = 0, total = 0, ans = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        aSum += a[i];
    }
    cin >> x;
    ans = x / aSum * n;
    total = x / aSum * aSum;
    for (int i = 0; i < n && total <= x; i++) {
        total += a[i];
        ans++;
    }
    cout << ans;
    return 0;
}