#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k, bCount = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'B') bCount++;
        }
        if (bCount == k) cout << 0;
        else if (bCount < k) {
            cout << 1 << "\n";
            int extraCount = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'A') extraCount++;
                if (bCount + extraCount == k) {
                    cout << i+1 << " B";
                    break;
                }
            }
        } else if (bCount > k) {
            cout << 1 << "\n";
            int extraCount = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'B') extraCount++;
                if (bCount - extraCount == k) {
                    cout << i+1 << " A";
                    break;
                }
            }
        }
        if (t) cout << "\n";
    }
    return 0;
}