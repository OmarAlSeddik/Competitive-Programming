#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        cout << n / x + 2;
        if (t) cout << "\n";
    }
    return 0;
}