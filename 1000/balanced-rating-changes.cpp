#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k = 1;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x % 2) {
            cout << (x + k) / 2;
            k *= -1;
        }
        else cout << x / 2;
        if (n) cout << "\n";
    }
    return 0;
}