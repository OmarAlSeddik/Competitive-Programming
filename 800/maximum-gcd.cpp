#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2) cout << (n - 1) / 2;
        else cout << n / 2;
        if (t) cout << "\n";
    }
    return 0;
}