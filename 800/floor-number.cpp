#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (n < 3) cout << 1;
        else {
            n -= 2;
            cout << fixed << setprecision(0);
            cout << ceil((double) n / x) + 1;
        }
        if (t) cout << "\n";
    }
    return 0;
}