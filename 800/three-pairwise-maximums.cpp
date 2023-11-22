#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int largest = max(max(x, y), max(x, z));
        int a = min(x, y);
        int b = min(x, z);
        int c = min(y, z);
        if (a != largest && b != largest && c != largest) cout << "NO";
        else {
            cout << "YES\n";
            cout << a << " " << b << " " << c;
        }
        if (t) cout << "\n";
    }
    return 0;
}