#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, ans;
    cin >> s;
    sort(s.begin(), s.end(), greater<char>());
    for (int i = 0; i < s.size(); i++) {
        if (i == s.size()-1) {
            ans = s;
            break;
        }
        if (s[i] != s[i+1]) {
            ans = s.substr(0,i+1);
            break;
        }
    }
    cout << ans;
    return 0;
}