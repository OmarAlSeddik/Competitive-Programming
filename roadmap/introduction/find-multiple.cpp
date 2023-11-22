#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, x;
    cin >> a >> b >> c;
    x = b / c * c; 
    if (x >= a) cout << x;
    else cout << -1;
    return 0;
}