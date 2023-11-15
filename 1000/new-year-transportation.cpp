#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int a[n-1];
    for (int i = 0; i < n-1; i++) cin >> a[i];
    int i = 0;
    while (i < n-1) {
        if (i == t-1) {
            cout << "YES";
            return 0;
        }
        if (i > t-1) {
            cout << "NO";
            return 0;
        }
        i += a[i];
    }
    if (i == t-1) cout << "YES";
    else cout << "NO";
    return 0;
}