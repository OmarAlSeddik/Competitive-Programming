#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    long long ans;
    cin >> n >> m >> a;
    ans = ceil((double)n/a) * ceil((double)m/a);
    cout << ans;
    return 0;
}