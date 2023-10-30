#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, lowest, highest, pos1 = 0, pos2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!i) {
            lowest = x;
            highest = x;
        }
        if (x < lowest) {
            lowest = x;
            pos1 = i;
        }
        if (x > highest) {
            highest = x;
            pos2 = i;
        }
    }
    if (pos1 > pos2) {
        cout << max(n-pos2-1, pos1);
    } else {
        cout << max(n-pos1-1, pos2);
    }
    return 0;
}