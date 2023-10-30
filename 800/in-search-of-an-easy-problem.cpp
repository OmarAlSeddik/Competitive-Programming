#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool isEasy = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x) isEasy = false;
    }
    if (isEasy) cout << "EASY";
    else cout << "HARD";
    return 0;
}