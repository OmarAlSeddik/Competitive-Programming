#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        vector<int> b, c;
        for (int i = 0; i < n; i++) {
            if (i == 0) b.push_back(a[i]);
            else if (b[b.size()-1] % a[i] == 0) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        if (!c.size()) cout << -1 << "\n";
        else {
            cout << b.size() << " " << c.size() << "\n";
            for (int i = 0; i < b.size(); i++) {
                if (!i) cout << b[i];
                else cout << " " << b[i];
            }
            cout << "\n";
            for (int i = 0; i < c.size(); i++) {
                if (!i) cout << c[i];
                else cout << " " << c[i];
            }
            cout << "\n";
        }
    }
    return 0;
}