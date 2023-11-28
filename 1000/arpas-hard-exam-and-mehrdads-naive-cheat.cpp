#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n == 0) {
        cout << 1;
        return 0;
    }
    n %= 4;
    if (n == 0) cout << 6;
    if (n == 1) cout << 8;
    if (n == 2) cout << 4;
    if (n == 3) cout << 2;
    return 0;
}