#include <bits/stdc++.h>
using namespace std;

bool compareByTotal(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
    return a.first.first + a.first.second < b.first.first + b.first.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    pair<pair<int, int>, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
    }
    sort(a, a + n, compareByTotal);
    while (q--) {
        string s;
        int x, y;
        cin >> s >> x >> y;
        if (s == "find") {
            if (binary_search(a, a + n, (x, y))) cout << "found";
            else cout << "not found";
        }
        else if (s == "upper") {
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (a[i].first.first + a[i].first.second > x + y) {
                    cout << a[i].second;
                    found = true;
                    break;
                }
            }
            if (!found) cout << -1;
        }
        else if (s == "lower") {
            bool found = false;
            for (int i = n-1; i > -1; i--) {
                if (a[i].first.first + a[i].first.second < x + y) {
                    cout << a[i].second;
                    found = true;
                    break;
                }
            }
            if (!found) cout << -1;
        }
    }
    return 0;
}