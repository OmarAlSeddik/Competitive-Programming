#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char flag[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> flag[i][j];    
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((j && flag[i][j] != flag[i][j-1]) ||
                (i && flag[i][j] == flag[i-1][j])) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}