#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, winning = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum1 = 0;
            int sum2 = 0;
            for (int k = 0; k < n; k++) {
                sum1 += a[k][j];
                sum2 += a[i][k];
            }
            if (sum1 > sum2) winning++;
        }
    }
    cout << winning;
    return 0;
}