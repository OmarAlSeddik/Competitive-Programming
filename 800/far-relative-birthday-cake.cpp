#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n-1);
}

int main() {
    int n, count = 0;
    cin >> n;
    int rows[n], cols[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char x;
            cin >> x;
            if (x == 'C') {
                rows[i]++;
                cols[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int c = factorial(rows[i]) / factorial(2) - factorial(abs(rows[i]-2));
        c += factorial(cols[i]) / factorial(2) - factorial(abs(cols[i]-2));
        count += c;
    }
    cout << count;
    return 0;
}