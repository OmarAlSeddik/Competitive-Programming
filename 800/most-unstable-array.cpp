#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        switch (n) {
            case 1:
                cout << 0;
                break;
            case 2:
                cout << m;
                break;
            default:
                cout << m*2;
                break;
        }
        if (t) cout << "\n";
    }
    return 0;
}