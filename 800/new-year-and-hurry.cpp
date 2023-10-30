#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, time, count = 0;
    cin >> n >> k;
    time = 240 - k;
    for (int i = 0; i < n; i++) {
        time -= (i+1) * 5;
        if (time < 0) break;
        count++;
    }
    cout << count;
    return 0;
}