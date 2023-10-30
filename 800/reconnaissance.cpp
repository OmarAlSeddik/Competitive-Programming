#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, count = 0;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[j] - a[i] <= d) count += 2;
        }
    }
    cout << count;
    return 0;
}