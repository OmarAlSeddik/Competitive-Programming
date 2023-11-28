#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    bool ans = true;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a == x || a == 7 - x || b == x || b == 7 - x) ans = false;
    }
    if (ans) cout << "YES";
    else cout << "NO";
    return 0;
}