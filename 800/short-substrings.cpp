#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string ans[t];
    for (int i = 0; i < t; i++) {
        string s1, s2;
        cin >> s1;
        s2 += s1[0];
        for (int j = 1; j < s1.length(); j+=2) s2 += s1[j];
        ans[i] = s2;
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}