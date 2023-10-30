#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, counter = 0, pos = 1;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        long long x, diff;
        cin >> x;
        diff = x - pos;
        if (x < pos) diff += n;
        counter += diff;
        pos = x;
    }

    cout << counter;
    return 0;
}