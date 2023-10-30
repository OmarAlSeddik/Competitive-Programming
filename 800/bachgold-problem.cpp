#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n/2 << "\n";
    for (int i = 0; i < n/2; i++) {
        if (!i) {
            if (n%2) cout << 3;
            else cout << 2;
        }
        else cout << " " << 2;
    }
    return 0;
}