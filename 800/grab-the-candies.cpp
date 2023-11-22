#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, evenSum = 0, oddSum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2) oddSum += x;
            else evenSum += x; 
        }
        if (evenSum > oddSum) cout << "YES";
        else cout << "NO";
        if (t) cout << "\n";
    }
    return 0;
}