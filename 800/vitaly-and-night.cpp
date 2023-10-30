#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x, y;
            cin >> x >> y;
            if (x || y) count++;
        }
    }
    cout << count;
}