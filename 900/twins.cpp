#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, sum1 = 0, sum2 = 0, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum1 += a[i];
    }
    sort(a, a+n);
    for (int i = n-1; i > -1; i--) {
        sum2 += a[i];
        count++;
        if (sum2 > sum1 / 2) break;
    }
    cout << count;
    return 0;
}