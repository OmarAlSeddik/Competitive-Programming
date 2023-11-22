#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i == 1) cout << i + n -1;
            else cout << " " << i - 1;
        }
        if (t) cout << "\n";
    }
    return 0;
}