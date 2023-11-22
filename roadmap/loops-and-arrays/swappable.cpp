#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 0;
    cin >> n;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans += i - map[x];
        map[x]++;
    }
    cout << ans;
    return 0;
}