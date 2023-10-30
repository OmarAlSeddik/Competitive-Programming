#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 1 || n == 0) return false;
    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

int nextPrime(int n) {
    for (int i = n + 1; i < 51; i++) {
        if (isPrime(i)) return i;
    }
    return 0;
}

int main () {
    int n, m;
    cin >> n >> m;
    if (nextPrime(n) == m) cout << "YES";
    else cout << "NO";
    return 0;
}