#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    set<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
    while (q--) {
        int x;
        cin >> x;
        int order = distance(st.begin(), st.find(x));
        cout << order << " " << st.size() - order - 1;
        if (q) cout << "\n";
    }
    return 0;
}