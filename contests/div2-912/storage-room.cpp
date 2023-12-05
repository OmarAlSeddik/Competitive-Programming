#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m[n][n];
        int ans[n];
        for (int i = 0; i < n; i++) ans[i] = 7;
        bool possible = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
                if (i != j) ans[i] &= m[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; i++) {
                if (ans[i] | ans[j] != m[i][j]) {
                    possible = false;
                    break;
                }
            }
            if (!possible) break;
        }
        if (!possible) cout << "NO";
        else {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                if (i) cout << " ";
                cout << ans[i];
            }
        } 
        if (t) cout << "\n";
    }
    return 0;
}