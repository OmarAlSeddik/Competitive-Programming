#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string ans[t];
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        if (x >= 1900) ans[i] = "Division 1";
        else if (x >= 1600) ans[i] = "Division 2";
        else if (x >= 1400) ans[i] = "Division 3";
        else ans[i] = "Division 4";
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}