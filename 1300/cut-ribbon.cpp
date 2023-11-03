#include <bits/stdc++.h>
using namespace std;

int main() {
    // n = xa + yb + zc
    int n, a, b, c, max = 0;
    cin >> n >> a >> b >> c;
    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n; y++) {
            int z = (n - x * a - y * b) / c;
            if (z >= 0 && x * a + y * b + z * c == n && x + y + z > max) max = x + y + z;
        }
    }
    cout << max;
    return 0;
}