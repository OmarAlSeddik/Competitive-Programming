#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, value = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        value += x;
    };
    cout << ceil((double) abs(value) / x);
    return 0;
}