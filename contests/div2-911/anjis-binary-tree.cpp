#include <bits/stdc++.h>
using namespace std;
int t, n, ans, tree[300001][2];
string s;

void dfs (int i, int sum) {
    if (!tree[i][0] && !tree[i][1]) ans = min(ans, sum);
    if (tree[i][0]) dfs(tree[i][0], sum + (s[i-1] != 'L' ? 1 : 0));
    if (tree[i][1]) dfs(tree[i][1], sum + (s[i-1] != 'R' ? 1 : 0));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> s;
        ans = n;
        for (int i = 1; i <= n; i++) cin >> tree[i][0] >> tree[i][1];
        dfs(1, 0);
        cout << ans;
        if (t) cout << "\n";
    }
    return 0;
}