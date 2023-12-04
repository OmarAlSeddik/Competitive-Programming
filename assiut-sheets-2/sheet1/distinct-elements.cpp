#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int prefix[100001] = {0};
    int count[100001] = {0};
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        count[x] = 1;
    }
    for (int i = 1; i < 100001; i++) {
        prefix[i] += count[i];
        prefix[i] += prefix[i-1];
    }
    while (q--) {
        int x;
        cin >> x;
        cout << prefix[x-1] - prefix[0] << " " << prefix[100000] - prefix[x];
        if (q) cout << "\n";
    }
    return 0;
}