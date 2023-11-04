#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        if (x > y) cout << x;
        else{
            x = min(x + k, y);
            cout << y + (y - x);
        }
        if (t) cout << "\n";
    }
    return 0;
}