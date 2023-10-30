#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i = 1;
    cin >> n >> m;
    while (true) {
        if (m < i) {
            cout << m;
            break;
        }
        m -= i;
        i++;
        if (i > n) i = 1;
    }
    return 0;
}