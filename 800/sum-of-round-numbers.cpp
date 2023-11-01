#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans;
    vector<vector<int>> vectors;
    for (int i = 0; i < t; i++) {
        int x, count = 0;
        vector<int> values;
        cin >> x;
        if (x / 10000) values.push_back(x / 10000 * 10000);
        x %= 10000;
        if (x / 1000) values.push_back(x / 1000 * 1000);
        x %= 1000;
        if (x / 100) values.push_back(x / 100 * 100);
        x %= 100;
        if (x / 10) values.push_back(x / 10 * 10);
        x %= 10;
        if (x) values. push_back(x);
        ans.push_back(values.size());
        vectors.push_back(values);
    }
    for (int i = 0; i < ans.size(); i++) {
        if (i) cout << "\n";
        cout << ans[i] << "\n";
        for (int j = 0; j < vectors[i].size(); j++) {
            if (j) cout << " ";
            cout << vectors[i][j];
        }
    }
    return 0;
}