#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[3];
        for (int i = 0; i < 3; i++) cin >> a[i];
        sort(a, a + 3);
        if (a[1] + a[2] >= 10) cout << "YES";
        else cout << "NO";
        if (t) cout << "\n";
    }
    return 0;
}