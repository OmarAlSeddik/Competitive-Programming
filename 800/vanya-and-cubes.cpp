#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0, y = 0, z = 0, count = 0;
    cin >> n;
    while (x <= n) {
        z++;
        y += z;
        x += y;
        if (x <= n) count++;
    }
    cout << count;
    return 0;
}