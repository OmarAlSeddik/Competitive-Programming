#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a = 0, b = 0, count1 = 0, count2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1) {
            a += x + y;
            count1 += x;
        } else {
            b += x + y;
            count2 += x;
        }
    }
    (count1 >= a/2) ? cout << "LIVE" : cout << "DEAD";
    cout << "\n";
    (count2 >= b/2) ? cout << "LIVE" : cout << "DEAD";
    return 0;
}