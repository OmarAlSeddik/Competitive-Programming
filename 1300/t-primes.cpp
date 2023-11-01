#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n == 1 || n == 0) return false;
    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

bool isTPrime(long long n) {
    long long sr = (long long) sqrt(n);
    if (sr != sqrt(n)) {
        return false;
    }
    else {
        if (isPrime(sr)) return true;
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    bool ans[n];
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (isTPrime(x)) ans[i] = true;
        else ans[i] = false;
    }
    for (int i = 0; i < n; i++) {
        if (i) cout << "\n";
        if (ans[i]) cout << "YES";
        else cout << "NO";
    }
    return 0;
}