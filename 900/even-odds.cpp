#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    long long midpoint;
    cin >> n >> k;
    if (n % 2) midpoint = n / 2 + 1;
    else midpoint = n / 2;
    if (k <= midpoint) cout << k * 2 - 1;
    else cout << (k - midpoint) * 2;
    return 0;
}