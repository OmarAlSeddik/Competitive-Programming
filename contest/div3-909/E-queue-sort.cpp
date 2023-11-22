#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int mn = a[0], mnIndex = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < mn) {
                mn = a[i];
                mnIndex = i;
            }
        }
        vector<int> b;
        for (int i = 0; i < n-mnIndex; i++) b.push_back(a[i+mnIndex]);
        vector<int> sorted = b;
        sort(sorted.begin(), sorted.end());
        if (sorted == b) cout << mnIndex;
        else cout << -1;
        if (t) cout << "\n";
    }
    return 0;
}