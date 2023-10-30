#include <bits/stdc++.h>
using namespace std;

int main() {
    int t[5], discard2 = 0, discard3 = 0, sum = 0;
    for (int i = 0; i < 5; i++) cin >> t[i];
    sort(t, t+5, greater<int>());
    for (int i = 0; i < 5; i++) {
        if (i<4 && t[i]==t[i+1] && !discard2) discard2 = t[i]*2;
        if (i<3 && t[i]==t[i+2] && !discard3) discard3 = t[i]*3;
        sum += t[i];
    }
    cout << sum - max(discard2, discard3);
    return 0;
}