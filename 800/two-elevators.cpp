#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int value1 = a - 1, value2 = abs(c - b) + (c - 1);
        if (value1 < value2) cout << 1;
        else if (value2 < value1) cout << 2;
        else cout << 3;
        if (t) cout << "\n";
    }
    return 0;
}