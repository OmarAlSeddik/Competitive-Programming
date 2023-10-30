#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, diff1, diff2;
    cin >> x1 >> y1 >> x2 >> y2;
    diff1 = abs(x1 - x2);
    diff2 = abs(y1 - y2);
    cout << min(diff1, diff2) + abs(diff1-diff2);
    return 0;
}