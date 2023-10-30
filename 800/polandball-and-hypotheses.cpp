#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n == 1 || n == 0) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (n % 2 && n != 1) cout << 1;
    else {
        int m = 2;
        while (isPrime(m * n + 1)) m++;
        cout << m;
    }
    return 0;
}