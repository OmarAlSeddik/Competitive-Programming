#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++) {
        long long x, y;
        cin >> x >> y;
        x %= y;
        if (x) a[i] = y - x;
        else a[i] = 0;
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        cout << a[i];
    }
    return 0;
}