#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    bool ans[t];
    for (int i = 0; i < t; i++) {
        int x;
        bool possible = true;
        cin >> x;
        int a[x];
        for (int j = 0; j < x; j++) cin >> a[j];
        sort(a, a+x);
        for (int j = 1; j < x; j++) {
            if (a[j] != a[j-1] && a[j] != a[j-1] + 1) {
                possible = false;
                break;
            }
        }
        ans[i] = possible;
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        if (ans[i]) cout << "YES";
        else cout << "NO";
    }
    return 0;
}