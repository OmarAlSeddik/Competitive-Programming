#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[4], ans = 0;
    for (int i = 0; i < 4; i++) cin >> a[i];
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        switch ((int)s[i]-48) {
            case 1:
                ans += a[0];
                break;
            case 2:
                ans += a[1];
                break;
            case 3:
                ans += a[2];
                break;
            case 4:
                ans += a[3];
                break;
        }
    }
    cout << ans;
    return 0;
}