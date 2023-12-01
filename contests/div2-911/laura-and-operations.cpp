#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int x, y, z;
        x = (b%2 == c%2) ? 1 : 0;
        y = (a%2 == c%2) ? 1 : 0;
        z = (a%2 == b%2) ? 1 : 0;
        cout << x << " " << y << " " << z;
        if (t) cout << "\n";
    }
    return 0;
}