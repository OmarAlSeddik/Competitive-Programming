#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int sorted[n];
    unordered_set<int> st;
    copy(a, a+n, sorted);
    sort(sorted, sorted+n);
    int j = n-1;
    for (int i = 0; i < n; i++) {
        if (i) cout << "\n";
        st.insert(a[i]);
        if (st.find(sorted[j]) != st.end()) {
            cout << sorted[j];
            j--;
        }
        while (st.find(sorted[j]) != st.end()) {
            cout << " " << sorted[j];
            j--;
        }
    }
    return 0;
}