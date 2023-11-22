#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    unordered_map<int, int> map;
    vector<int> ans;
    for (int i = 0; i < q; i++) {
        int z, x;
        cin >> z >> x;
        if (z == 1) map[x]++;
        else ans.push_back(map[x]);
    }
    for (int i = 0; i < ans.size(); i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}