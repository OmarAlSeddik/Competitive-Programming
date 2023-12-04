#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, mx, iMax = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!i) mx = a[i];
        else if (mx < a[i]) {
            iMax = i;
            mx = a[i];
        }
    }
    int v1 = 0, v2 = 0, c1 = 0, c2 = 0;
    for (int i = iMax; i > -1; i--) {
        v1 = a[i] + c1;
        c1++;
    }
    for (int i = iMax+1; i < n; i++) {
        v1 = a[i] + c1;
        c1++;
    }
    for (int i = iMax; i < n; i++) {
        v2 = a[i] + c2;
        c2++;
    }
    for (int i = iMax-1; i > -1; i--) {
        v2 = a[i] + c2;
        c2++;
    }
    cout << max(v1, v2);
    return 0;
}