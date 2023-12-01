#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, count = 0;
    cin >> n >> k;
    int a[101] = {0};
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (a[x] == 0) {
            count++;
            a[x] = i;
        }
    }
    if (count < k) {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    for (int i = 0; i < 101 && k; i++) {
        if (a[i]) {
            k--;
            if (k) cout << a[i] << " ";
            else cout << a[i];
        }
    }
    return 0;
}