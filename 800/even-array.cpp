#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, even = 0, odd = 0, count = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2) odd++;
            else even++;
            if (x % 2 != i % 2) count++;
        }
        if (odd == n / 2 && even == ceil((double) n / 2)) cout << count / 2;
        else cout << -1;
        if (t) cout << "\n";
    }
    return 0;
}