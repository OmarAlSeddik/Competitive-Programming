#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, highestCount = 0, highestIndex;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        float x, count;
        cin >> x;
        count = ceil(x / m);
        if (count >= highestCount) {
            highestCount = count;
            highestIndex = i + 1;
        }
    }

    cout << highestIndex;
    return 0;
}