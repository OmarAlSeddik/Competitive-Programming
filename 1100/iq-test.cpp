#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char a[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            int count = 0;
            if (a[i-1][j] == a[i][j]) count++;
            if (a[i][j-1] == a[i][j]) count++;
            if (a[i-1][j-1] == a[i][j]) count++;
            if (count > 1) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}