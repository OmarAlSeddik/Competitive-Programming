#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, max = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] - '`' > max) max = s[i] - '`';
        }
        cout << max;
        if (t) cout << "\n";
    }
    return 0;
}