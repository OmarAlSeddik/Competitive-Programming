#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x1, y1, x2 = 0, y2 = 0;
    cin >> n >> m;
    x1 = m;
    y1 = n;
    char rectangle[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> rectangle[i][j];
            if (rectangle[i][j] == '*') {
                if (i < y1) y1 = i;
                if (i > y2) y2 = i;
                if (j < x1) x1 = j;
                if (j > x2) x2 = j;
            }    
        }
    }
    for (int i = y1; i <= y2; i++) {
        for (int j = x1; j <= x2; j++) {
            cout << rectangle[i][j];
        }
        cout << "\n";
    }
    return 0;
}