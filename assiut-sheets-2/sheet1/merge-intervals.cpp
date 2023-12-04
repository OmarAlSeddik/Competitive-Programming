#include <bits/stdc++.h>
using namespace std;

bool compareByFirst (const pair<int, int> a, const pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    pair<int, int> a[n];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(a, a + n, compareByFirst);
    v.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        if (v.back().second >= a[i].first) {
            v.back().second = max(v.back().second, a[i].second);
        } else v.push_back(a[i]);
    }
    for (int i = 0; i < v.size(); i++) {
        if (i) cout << "\n";
        cout << v[i].first << " " << v[i].second;
    }
    return 0;
}