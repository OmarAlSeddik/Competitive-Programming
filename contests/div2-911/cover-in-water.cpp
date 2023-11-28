#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        bool threeInRow = false;
        for (int i = 0; i < n; i++) {
            if (i > 1 && s[i] == '.' && s[i] == s[i-1] && s[i] == s[i-2]) threeInRow = true;
            if (s[i] == '.') count++;
        }
        if (threeInRow) cout << 2;
        else cout << count;
        if (t) cout << "\n";
    }
    return 0;
}