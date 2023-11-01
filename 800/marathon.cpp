#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++) {
        int x[4], count = 0;
        for (int j = 0; j < 4; j++) {
            cin >> x[j];
            if (j && x[j] > x[0]) count++;
        }
        ans[i] = count;
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}