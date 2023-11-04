#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x[3];
        cin >> x[0] >> x[1] >> x[2];
        sort(x, x+3);
        cout << x[1];
        if (t) cout << "\n";
    }
    return 0;
}