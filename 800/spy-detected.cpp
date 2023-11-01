#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++) {
        int x, index = -1;
        cin >> x;
        int a[x];
        for (int j = 0; j < x; j++) cin >> a[j];
        for (int j = 0; j < x; j++) {
            bool condition1 = j==0 && a[j] != a[j+1] && a[j] != a[j+2];
            bool condition2 = j==x-1 && a[j] != a[j-1] && a[j] != a[j-2];
            bool condition3 = j > 0 && j < x-1 && a[j] != a[j-1] && a[j] != a[j+1];
            if (condition1 || condition2 || condition3) {
                index = j;
                break;
            }
        }
        ans[i] = index;
    }
    for (int i = 0; i < t; i++) {
        if (i) cout << "\n";
        cout << ans[i]+1;
    }
    return 0;
}