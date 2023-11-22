#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] != s[n-1-i]) count++;
            else break;
        }
        cout << s.length() - count * 2;
        if (t) cout << "\n";
    }
    return 0;
}