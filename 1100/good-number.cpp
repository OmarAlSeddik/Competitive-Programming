#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, count = 0;
    cin >> n >> k;
    unordered_set<char> st;
    for (int i = 0; i <= k; i++) st.insert(char(i+48));
    while (n--) {
        string s;
        cin >> s;
        unordered_set<char> stx;
        int x = 0;
        for (int i = 0; i < s.size(); i++) stx.insert(s[i]);
        for (auto it = stx.begin(); it != stx.end(); it++) {
            if (st.find(*it) != st.end()) x++;
        }
        if (x == st.size()) count++;
    }
    cout << count;
    return 0;
}