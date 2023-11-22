#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = n / 3;
        if (x + x * 2 == n) cout << x << " " << x;
        else if (x + x * 2 == n - 1) cout << x + 1 << " " << x;
        else cout << x << " " << x + 1;
        if (t) cout << "\n";
    }
    return 0;
}