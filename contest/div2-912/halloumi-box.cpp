#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        bool isSorted = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i && a[i] < a[i-1]) isSorted = false; 
        }
        if (k == 1 && isSorted == false) cout << "NO";
        else cout << "YES";
        if (t) cout << "\n";
    }
    return 0;
}