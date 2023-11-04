#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x;
        cin >> a >> b;
        x = max(min(a, b) * 2, max(a, b)); 
        cout << pow(x, 2);
        if (t) cout << "\n";
    }
    return 0;
}