#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count1 = 0, count2 = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) count1++;
            else count2++;
        };
        if (count1 % 2 || count2 % 2 && count1 == 0) cout << "NO";
        else cout << "YES";
        if (t) cout << "\n";
    }
    return 0;
}