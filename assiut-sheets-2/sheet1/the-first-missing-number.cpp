#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    unordered_set<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
    for (int i = -m; i <= m; i++) {
        if (st.find(i) == st.end()) {
            cout << i;
            break;
        }
    }
    return 0;
}