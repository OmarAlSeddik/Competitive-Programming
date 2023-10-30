#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i==0 && j==0) || (i!=0 && a[i-1][j]=='.') || (j!=0 && a[i][j-1]=='.')) {
                a[i][j] = 'C';
                ans++;
            }
            else a[i][j] = '.';
        }
    }
    cout << ans << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}