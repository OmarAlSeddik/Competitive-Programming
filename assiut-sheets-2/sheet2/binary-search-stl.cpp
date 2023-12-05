#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    while (q--) {
        string s;
        int x;
        cin >> s >> x;
        if (s == "lower_bound") {
            auto it = lower_bound(a, a + n, x);
            if (it == a + n) cout << "-1\n";
            else cout << *it << "\n";
        }
        else if (s == "upper_bound") {
            auto it = upper_bound(a, a + n, x);
            if (it == a + n) cout << "-1\n";
            else cout << *it << "\n";
        }
        else if (s == "binary_search") {
            if (binary_search(a, a + n, x)) cout << "found\n";
            else cout << "not found\n"; 
        }
    }
    return 0;
}