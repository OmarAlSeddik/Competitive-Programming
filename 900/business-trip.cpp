#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, sum = 0, count = 0;
    bool reached = false;
    cin >> k;
    int months[12];
    for (int i = 0; i < 12; i++) cin >> months[i];
    sort(months, months + 12, greater<int>());
    for (int i = 0; i < 12; i++) {
        if (sum < k) {
            sum += months[i];
            count++;
        }
        if (sum >= k) {
            reached = true;
            break;
        }
    }
    if (reached) cout << count;
    else cout << -1;
    return 0;
}