#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        if (n % x > y) cout << n - (n % x - y);
        else if (n % x < y) cout << n - (x + n % x - y);
        else cout << n;
        if (t) cout << "\n";
    }
    return 0;
}