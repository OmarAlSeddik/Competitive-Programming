#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main() {
    int a, b, n;
    bool turnA = true;
    cin >> a >> b >> n;
    while(true) {
        turnA ? n -= gcd(n, a) : n-= gcd(n, b);
        turnA = !turnA;
        if (n < 0) {
            turnA ? cout << 0 : cout << 1;
            break;
        }
    }
    return 0;
}