#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    bool ans[t];
    for (int i = 0; i < t; i++) {
        int x[3];
        for (int j = 0; j < 3; j++) cin >> x[j];
        sort(x, x+3);
        if (x[2] == x[0] + x[1]) ans[i] = true;
        else ans[i] = false;
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        if (ans[i]) cout << "YES";
        else cout << "NO";
    }
    return 0;
}