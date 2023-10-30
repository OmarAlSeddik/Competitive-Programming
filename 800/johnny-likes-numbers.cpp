#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    while (ans <= n) {
        ans += k;
    }
    cout << ans;
    return 0;
}