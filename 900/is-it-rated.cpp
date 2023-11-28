#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, min;
    cin >> n;
    string ans = "maybe";
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (i == 0) min = x;
        if (x != y) ans = "rated";
        if (x > min && ans == "maybe") ans = "unrated";
        else min = x;
    }
    cout << ans;
    return 0;
}