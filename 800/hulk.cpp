#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i) cout << " that ";
        if (i%2) cout << "I love";
        else cout << "I hate";
    }
    cout << " it";
    return 0;
}