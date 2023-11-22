#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        bool evenExists = false, oddExists = false;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2) oddExists = true;
            else evenExists = true;
        }
        if ((n % 2 && oddExists) || (n % 2 == 0 && evenExists && oddExists)) cout << "YES";
        else cout << "NO";
        if (t) cout << "\n";
    }
    return 0;
}