#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n;
    vector<int> v(n), ans(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        while (!st.empty() && v[i] > v[st.top()]) {
            ans[st.top()] = i+1;
            st.pop();
        }
        st.push(i);
    }
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        cout << ans[x-1] << "\n";
    }
    return 0;
}