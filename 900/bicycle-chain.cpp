#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, count = 0, largest = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            double gear = (double) b[j] / a[i];
            if (gear == floor(gear)) {
                if (gear > largest) {
                    count = 1;
                    largest = gear;
                } else if (gear == largest) count++;
            }
        }
    }

    cout << count;
    return 0;
}