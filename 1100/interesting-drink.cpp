#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cin >> q;
    int ans[q];
    for (int k = 0; k < q; k++) {
        int x;
        cin >> x;
        int l = 0, r = n - 1, m = 0;
        while (l <= r) {
            m = (r + l) / 2;
            if (x < a[m]) r = m-1;
            else if (x > a[m]) l = m + 1;
            else {
                ans[k] = m + 1;
                break;
            }
        }
        if (l > r) ans[k] = 0;
    }
    for (int i = 0; i < q; i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}