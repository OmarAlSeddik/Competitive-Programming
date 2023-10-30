#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, t, st = 0, ts = 0;
    cin >> n;
    int d[n];
    for (int i = 0; i < n; i++) cin >> d[i];
    cin >> s >> t;
    for (int i = 0; i < n; i++) {
        if ((i >= s-1 && i < t-1) || (i >= t-1 && i < s-1)) st += d[i];
        else ts += d[i];
    }
    cout << min(st, ts);
    return 0;
}