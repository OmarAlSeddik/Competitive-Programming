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
        unordered_set<char> set;
        for (int i = 0; i < s.length(); i++) {
            set.insert(s[i]);
        }
        cout << set.size() * 2 + n - set.size();
        if (t) cout << "\n";
    }
    return 0;
}