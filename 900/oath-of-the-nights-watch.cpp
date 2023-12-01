#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a, a+n);
    cout << max(n - (mp[a[0]] + mp[a[n-1]]), 0);
    return 0;
}