#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, sequence[1000];
    cin >> t;
    int ans[t];
    for (int i = 0; i < 1000; i++) {
        if (i) {
            int prev = sequence[i-1];
            int x = 1;
            while ((prev+x) % 3 == 0 || (prev+x) % 10 == 3) {
                x++;
            }
            sequence[i] = prev+x;
        }
        else sequence[i] = 1;
    }
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        ans[i] = sequence[x-1];
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        cout << ans[i];
    }
    return 0;
}