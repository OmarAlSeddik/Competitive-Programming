#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 33; i++) {
        if (i * (i+1) / 2 == n) {
            cout << "YES";
            break;
        } else if (i * (i+1) / 2 > n) {
            cout << "NO";
            break;
        }
    }
    return 0;
}