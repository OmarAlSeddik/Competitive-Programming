#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    bool isBlackAndWhite = true;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;
            cin >> x;
            if (x=='C' || x=='M' || x=='Y') isBlackAndWhite = false;
        }
    }
    if (isBlackAndWhite) cout << "#Black&White";
    else cout << "#Color";
    return 0;
}