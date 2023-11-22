#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n, highest;
        cin >> a >> b >> c >> n;
        highest = max(max(a, b), max(a, c));
        n -= highest - a;
        a += highest - a;
        n -= highest - b;
        b += highest - b;
        n -= highest - c;
        c += highest - c;
        if (n < 0 || (a + b + c + n) % 3 != 0) cout << "NO";
        else cout << "YES";
        if (t) cout << "\n";
    }
    return 0;
}