#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    unordered_set<int> on;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int bulb;
            cin >> bulb;
            on.insert(bulb);
        }
    }
    if (on.size() == m) cout << "YES";
    else cout << "NO";
    return 0;
}