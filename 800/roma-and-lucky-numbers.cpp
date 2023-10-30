#include <bits/stdc++.h>
using namespace std;

int luckyCount(int n) {
    int count = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (luckyCount(x) <= k) count++;
    }
    cout << count;
    return 0;
}