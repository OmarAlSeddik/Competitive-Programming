#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<int, bool> exists;
        bool sus = false;
        for (int i = 0; i < s.length(); i++) {
            if (i && s[i] != s[i-1] && exists[s[i]]) {
                sus = true;
                break;
            }
            exists[s[i]] = true;
        }
        if (sus) cout << "NO";
        else cout << "YES";
        if (t) cout << "\n";
    }
    return 0;
}