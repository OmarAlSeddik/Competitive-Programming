#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, count = 0, prev = 0;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x - prev <= c) count++;
        else count = 1;
        prev = x;
    }
    cout << count;
    return 0;
}