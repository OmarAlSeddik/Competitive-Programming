#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, day;
    cin >> n;
    int a[7];
    for (int i = 0; i < 7; i++) cin >> a[i];
    while (sum < n) {
        for (int i = 0; i < 7; i++) {
            sum += a[i];
            if (sum >= n) {
                day = i + 1;
                break;
            };
        }
    }

    cout << day;
    return 0;
}