#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        ans[i] = ((x + 1) / 2) - 1;
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}