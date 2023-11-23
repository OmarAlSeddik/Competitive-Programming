#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    char a = ' ', b = ' ';
    bool ans = true;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (i == 0) {
            a = s[0];
            b = s[1];
            if (a == b) ans = false;
        }
        if (s[i] != a || s[s.size()-1-i] != a) ans = false;
        for (int j = 0; j < s.size(); j++) {
            if (j != i && j != s.size()-1-i && s[j] != b) ans = false; 
        }
    }
    if (ans) cout << "YES";
    else cout << "NO";
    return 0;
}