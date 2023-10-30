#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 2, y = 2;
    cin >> n;
    cout << x;
    for (int i = 0; i < n-2; i++) {
        x += y;
        y++;
        if (x > n) x -= n;
        cout << " " << x;
    }
    return 0;
}