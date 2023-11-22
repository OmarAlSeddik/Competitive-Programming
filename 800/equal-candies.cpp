#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, min, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        min = a[0];
        for (int i = 1; i < n; i++) count += a[i] - min;
        cout << count;
        if (t) cout << "\n";
    }
    return 0;
}