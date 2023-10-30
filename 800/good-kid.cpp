#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int answers[t];
    for (int i = 0; i < t; i++) {
        int n, lowest = 10, product = 1, zeroCount = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x < lowest) lowest = x;
            if (x) product *= x;
            else zeroCount++;
        }
        if (zeroCount > 1) answers[i] = 0;
        else if (zeroCount == 1) answers[i] = product;
        else answers[i] = product / lowest * (lowest+1);
    }
    for (int i = 0; i < t; i++) {
        if (!i) cout << answers[i];
        else cout << "\n" << answers[i];
    }
    return 0;
}