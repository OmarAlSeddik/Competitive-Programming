#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, min;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        min = a[1] - a[0]; 
        for (int i = 2; i < n; i++) {
            if (a[i] - a[i-1] < min) min = a[i] - a[i-1];
        }
        cout << min;
        if (t) cout << "\n";
    }
    return 0;
}