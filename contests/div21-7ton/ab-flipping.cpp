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
        string s;
        cin >> s;
        int l = n, r = -1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A') l = min(l, i);
            else r = max(r, i);
        }
        if (l == n || r == -1 || l > r) cout << 0;
        else cout << r - l;
        if (t) cout << "\n";
    }
    return 0;
}