#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n*2+1];
    for (int i = 0; i < n*2+1; i++) cin >> a[i];
    for (int i = 1; i < n*2+1; i += 2) {
        if (k && a[i]-1 > a[i-1] && a[i]-1 > a[i+1]) {
            a[i]--;
            k--;
        }
    }
    for (int i = 0; i < n*2+1; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    return 0;
}