#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, odd = 0;
        cin >> n;
        for (int i = 0; i < n * 2; i++) {
            int x;
            cin >> x;
            if (x % 2) odd++;
        }
        if (odd == n) cout << "Yes";
        else cout << "No";
        if (t) cout << "\n";
    }
    return 0;
}