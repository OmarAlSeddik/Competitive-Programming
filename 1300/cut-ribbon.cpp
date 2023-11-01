#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x[3], count = 0;
    cin >> n >> x[0] >> x[1] >> x[2];
    sort(x, x+3);
    while (n) {
        if (n % x[0] == 0) {
            count += n / x[0];
            break;
        }
        
    }
    return 0;
}