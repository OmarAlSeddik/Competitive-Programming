#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n], l = 0, r = n - 1;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (i%2) {
                b[i] = a[r];
                r--;
            }
            else {
                b[i] = a[l];
                l++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i) cout << " ";
            cout << b[i];
        }
        if (t) cout << "\n";
    }
    return 0;
}