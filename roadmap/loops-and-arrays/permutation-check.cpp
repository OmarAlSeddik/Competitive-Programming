#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    bool a[n] = {false};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x-1] = true;
    }
    for (int i = 0; i < n; i++) {
        if (!a[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}