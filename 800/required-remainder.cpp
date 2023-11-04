#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++) {
        int x, y, n;
        cin >> x >> y >> n;
        ans[i] = floor((double) n / x) * x - (x -y);
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}