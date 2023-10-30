#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x > y) m++;
        if (y > x) c++;
    }
    if (m > c) cout << "Mishka";
    else if (c > m) cout << "Chris";
    else cout << "Friendship is magic!^^";
    return 0;
}