#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (c == a + b) cout << "+";
        else cout << "-";
        if (t) cout << "\n";
    }
    return 0;
}