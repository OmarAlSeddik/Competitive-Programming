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
        int low = 0, high = n-1, mid;
        ans[k] = 0;
        while (low <= high) {
            mid = (low + high) / 2;
            if (x < a[mid]) high = mid - 1;
            if (x >= a[mid]) {
                ans[k] = mid+1;
                low = mid + 1;
            }
        }
    }
    for (int i = 0; i < q; i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}