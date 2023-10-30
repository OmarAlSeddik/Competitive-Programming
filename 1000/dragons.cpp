#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    pair<int, int> dragons[n];
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        dragons[i] = make_pair(x, y);
    }
    sort(dragons, dragons + n);
    for (int i = 0; i < n; i++) {
        if (s <= dragons[i].first) {
            cout << "NO";
            return 0;
        }
        else s += dragons[i].second;
    }
    cout << "YES";
    return 0;
}