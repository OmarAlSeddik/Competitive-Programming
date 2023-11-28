#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    int sum = 0;
    ll a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            sum += x;
            a[i][j] = sum;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i) cout << "\n";
        for (int j = 0; j < m; j++) {
            if (j) cout << " ";
            cout << a[i][j];
        }
    }
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (q) cout << "\n";
    }
    return 0;
}