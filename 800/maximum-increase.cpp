#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, current = 1, max = 1, prev;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i && x > prev) {
            current++;
            if (current > max) max = current;
        }
        else current = 1;
        prev = x;
    }
    cout << max;
    return 0;
}