#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, min, index1 = 0, index2 = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    min = abs(a[0] - a[1]);

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            int diff = abs(a[i] - a[0]);
            if (diff < min) {
                min = diff;
                index1 = i;
                index2 = 0;
            }
        } else {
            int diff = abs(a[i] - a[i+1]);
            if (diff < min) {
                min = diff;
                index1 = i;
                index2 = i + 1;
            }
        }
    }

    cout << index1 + 1 << " " << index2 + 1;
    return 0;
}