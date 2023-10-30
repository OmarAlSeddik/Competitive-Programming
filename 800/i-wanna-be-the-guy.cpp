#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    unordered_set<int> set;
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        set.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        set.insert(x);
    }
    if (set.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    return 0;
}