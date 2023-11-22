#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum1 = 0, sum2 = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i < n / 2 || i == n) sum1 += pow(2,i);
            else sum2 += pow(2, i);
        }
        cout << sum1 - sum2;
        if (t) cout << "\n";
    }
    return 0;
}