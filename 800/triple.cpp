#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = -1;
        cin >> n;
        unordered_map<int, int> count;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            count[x]++;
            if (count[x] == 3) {
                ans = x;
            } 
        }
        cout << ans;
        if (t) cout << "\n";
    }
    return 0;
}