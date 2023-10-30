#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, sum = 0, count = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n, greater<int>());
    for (int i = 0; i < n; i++) {
        sum += a[i];
        count++;
        if (sum >= m) break;
    }
    cout << count;
    return 0;
}