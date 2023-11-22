#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == b) cout << 0;
        else if (a < b) {
            if (a % 2 == b % 2) cout << 2;
            else cout << 1;
        }
        else if (a > b) {
            if (a % 2 == b % 2) cout << 1;
            else cout << 2;
        }
        if (t) cout << "\n";
    }
    return 0;
}