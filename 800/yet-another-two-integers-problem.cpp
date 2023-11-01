#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t;i ++) {
        int a, b;
        cin >> a >> b;
        ans[i] = ceil((double) abs(a - b) / 10);
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}