#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    bool ans[t];
    for (int k = 0; k < t; k++) {
        long long x;
        cin >> x;
        while (x % 2 == 0) x /= 2;
        if (x == 1) cout << "NO";
        else cout << "YES";
        if (t) cout << "\n";
    }
    return 0;
}