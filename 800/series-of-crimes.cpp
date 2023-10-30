#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x = 0, y = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '*') {
                x ^= i;
                y ^= j;
            }
        }
    }
    cout << x+1 << " " << y+1;
}