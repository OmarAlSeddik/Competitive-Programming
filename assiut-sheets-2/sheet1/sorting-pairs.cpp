#include <bits/stdc++.h>
using namespace std;

bool compareBySalary (const pair<string, int> a, const pair<string, int> b) {
    return a.second > b.second;
}

bool compareByName (const pair<string, int> a, const pair<string, int> b) {
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    pair<string, int> a[n];
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    stable_sort(a, a+n, compareByName);
    stable_sort(a, a+n, compareBySalary);
    for (int i = 0; i < n; i++) {
        if (i) cout << "\n";
        cout << a[i].first << " " << a[i].second;
    }
    return 0;
}