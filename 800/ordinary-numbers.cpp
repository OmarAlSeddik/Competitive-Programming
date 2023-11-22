#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ans = (s.length() - 1) * 9;
        ans += s[0] - '0';
        if (s.length() > 1) {
            ans--;
            for (int i = 1; i < s.length(); i++) {
                if (s[i] < s[0]) break;
                if (s[i] > s[0]) {
                    ans++;
                    break;
                }
                if (i == s.length()-1 && s[i] == s[0]) ans++;
            }
        }
        cout << ans;
        if (t) cout << "\n";
    }
    return 0;
}