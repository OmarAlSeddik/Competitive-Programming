#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> b;
        for (int i = 0; i < n; i++) {
            if (b.size() == 0 || a[i] >= b[b.size()-1]) b.push_back(a[i]);
            else {
                b[b.size()-1] 
                count++;
            }
        }
        if (t) cout << "\n";
    }
    return 0;
}