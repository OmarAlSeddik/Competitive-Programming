#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int z = (t+d) / t;
    cout << ((z*k < n) ? "YES" : "NO");
}