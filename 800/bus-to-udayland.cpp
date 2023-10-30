#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool found = false;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!found) {
            for (int j = 1; j < 5; j++) {
                if (a[i][j] == 'O' && a[i][j-1] == 'O') {
                    a[i][j] = '+';
                    a[i][j-1] = '+';
                    found = true;
                    break;
                }
            }
        }
    }
    if (found) {
        cout << "YES" << "\n";
        for (int i = 0; i < n; i++) {
            if (i) cout << "\n";
            cout << a[i];
        }
    }
    else cout << "NO";
    return 0;
}