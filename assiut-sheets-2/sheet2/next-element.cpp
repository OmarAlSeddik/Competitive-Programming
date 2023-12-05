#include <bits/stdc++.h>
using namespace std;

bool compareByFirst(const pair<int, int> a, const pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n;
    pair<int, int> a[n], sorted[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    copy(a, a + n, sorted);
    sort(sorted, sorted + n, compareByFirst);
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        
    }
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << sorted[i].second;
    }
    return 0;
}

// [46, 82, 28, 62, 92]
// [1, 2, 3, 4, 5]
// [28, 46, 62, 82, 92]
// [3, 1, 4, 2, 5]