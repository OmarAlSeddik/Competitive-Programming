#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    int id[n];
    for (int i = 0; i < n; i++) cin >> id[i];
    sort(id, id+n);
    for (int i = 0; i < n; i++) {
        if (id[i] == 0) continue;
        else {
            int count = 1;
            while (id[i+count] == id[i]) {
                count++;
                if (count > 2) {
                    cout << -1;
                return 0;
            }
            }
            if (count == 2) ans++;
            i += count-1;
        }
    }
    cout << ans;
    return 0;
}