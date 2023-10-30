#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, smallest;
    cin >> n >> m;
    int f[m];
    for (int i = 0; i < m; i++) cin >> f[i];
    sort(f, f + m);
    smallest = f[n - 1] - f[0]; 
    for (int i = 0; i < m - n + 1; i++) {
        int diff = f[i + n - 1] - f[i];
        if (diff < smallest) smallest = diff;
    }
    cout << smallest;
    return 0;
}