#include <bits/stdc++.h>
using namespace std;
#define MAX 100001

int main() {
    long long dp[MAX] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dp[x]++;
    }
    for (int i = 1; i < MAX; i++) {
        dp[i] = dp[i] * i;
        if (i > 2) dp[i] += dp[i-2];
        dp[i] = max(dp[i], dp[i-1]);
    }
    cout << dp[MAX-1];
    return 0;
}