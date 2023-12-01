#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x = 5 - (i % 5);
        for (int j = x; j <= m; j += 5) {
            if ((i + j) % 5 == 0) count++;
        }
    }
    cout << count;
    return 0;
}