#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    int count = 1;
    bool found = false;
    while (!found) {
        if (k * count % 10 - r == 0 || k * count % 10 == 0) {
            found = true;
        }
        else count++;
    }
    cout << count;
    return 0;
}