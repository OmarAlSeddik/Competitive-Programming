#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int a[n];
    int prefixSum[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefixSum[i] = a[i];
        if (i) prefixSum[i] += prefixSum[i-1];
    }
    while (q--) {
        int l, r, v;
        cin >> l >> r >> v;
        prefixSum[l-1] += v;
        if (r < n) prefixSum[r] -= v;
    }
    for (int i = 0; i < n; i++) {
        a[i] = prefixSum[i];
        if (i) a[i] = prefixSum[i] - prefixSum[i-1];
    }
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    return 0;
}