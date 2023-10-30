#include <bits/stdc++.h>
using namespace std;

int main() {
    int k2, k3, k5, k6, count256 = 0, count32 = 0;
    cin >> k2 >> k3 >> k5 >> k6;
    while (k2 && k5 && k6) {
        count256++;
        k2--;
        k5--;
        k6--;
    }
    while (k2 && k3) {
        count32++;
        k2--;
        k3--;
    }
    cout << count256 * 256 + count32 * 32;
    return 0;
}