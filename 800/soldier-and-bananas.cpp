#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w, cost = 0;
    cin >> k >> n >> w;
    for (int i = 0; i < w; i++) {
        cost += (i+1) * k;
    }
    if (cost > n) cout << cost - n;
    else cout << 0;
    return 0;
}