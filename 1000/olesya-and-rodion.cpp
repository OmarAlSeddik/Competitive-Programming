#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10) {
        cout << -1;
        return 0;
    }
    cout << t;
    for (int i = 2; i < n; i++) cout << 0;
    if (n != 1 && t != 10) cout << 0;
    return 0;
}