#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    bool ans[t];
    for (int i = 0; i < t; i++) {
        string x;
        cin >> x;
        if (int(x[0]) + int(x[1]) + int(x[2]) == int(x[3]) + int(x[4]) + int(x[5])) ans[i] = true;
        else ans[i] = false;
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        if (ans[i]) cout << "YES";
        else cout << "NO";
    }
    return 0;
}