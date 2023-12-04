#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n;
    cin >> s >> n;
    int a[s.length()+1] = {0};
    for (int i = 1; i <= s.length(); i++) {
        if (s[i-1] == 'a') a[i]++;
        a[i] += a[i-1];
    }
    while (n--) {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l-1];
        if (n) cout << "\n";
    }
    return 0;
}