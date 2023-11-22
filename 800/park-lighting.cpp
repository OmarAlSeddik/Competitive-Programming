#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << fixed << setprecision(0);
        cout << ceil((double) n * m / 2);
        if (t) cout << "\n";
    }
    return 0;
}