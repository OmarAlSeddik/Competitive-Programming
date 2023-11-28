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
        int first;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (!i) first = x;
        }
        if (first == 1) cout << "YES";
        else cout << "NO";
        if (t) cout << "\n";
    }
    return 0;
}