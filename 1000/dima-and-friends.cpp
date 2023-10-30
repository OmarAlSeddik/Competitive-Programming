#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0, answer = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    };

    for (int i = 1; i < 6; i++) {
        if ((sum + i) % (n + 1) != 1) {
            answer++;
        }
    }

    cout << answer;
    return 0;
}