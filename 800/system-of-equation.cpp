#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i * i <= n; i++) {
        for (int j = 0; j * j <= m; j++) {
            if (pow(i, 2) + j == n && i + pow(j, 2) == m) {
                count++;
            }
        } 
    }
    cout << count;
    return 0;
}