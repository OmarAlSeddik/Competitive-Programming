#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, zeroCount = 0, fiveCount = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x ? fiveCount++ : zeroCount++;
    }

    if (fiveCount >= 9 && zeroCount > 0) {
        string answer;
        for (int i = 0; i < fiveCount - fiveCount % 9; i++)
            answer += '5';
        for (int i = 0; i < zeroCount; i++) answer += '0';
        cout << answer;
    }

    else if (zeroCount > 0) cout << 0;
    else cout << -1;
    return 0;
}