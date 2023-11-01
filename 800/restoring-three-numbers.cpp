#include <bits/stdc++.h>
using namespace std;

int main() {
    int x[4], a, b, c;
    for (int i = 0; i < 4; i++) cin >> x[i];
    sort(x, x+4);
    c = x[3] - x[0];
    a = x[1] - c;
    b = x[2] - c;
    cout << a << " " << b << " " << c;
    return 0;
}