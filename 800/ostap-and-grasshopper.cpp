#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, start = 0, end = 0;
    bool ans = false;
    string s;
    cin >> n >> k;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'G') start = i;
        if (s[i] == 'T') end = i;
    }
    if (start < end) {
        for (int i = start; i <= end; i += k) {
            if (s[i] == 'T') {
                ans = true;
                break;
            }
            if (s[i] == '#') break;
        }
    }
    else {
        for (int i = start; i >= end; i -= k) {
            if (s[i] == 'T') {
                ans = true;
                break;
            }
            if (s[i] == '#') break;
        }
    }
    if (ans) cout << "YES";
    else cout << "NO";
    return 0;
}