#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b, sum = 0;
    cin >> n >> m >> a >> b;
    if (b / m < a) {
        sum += n / m * b;
        n %= m;
        if (n && b / n < a) {
            sum += b;
            n = 0;
        }
    }
    sum += n * a;
    cout << sum;
    return 0;
}