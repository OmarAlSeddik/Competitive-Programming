#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, diff = 0;
        cin >> n;
        int a[n*2];
        for (int i = 0; i < n*2; i++) cin >> a[i];
        sort (a, a+n*2);
        int points[n][2];
        for (int i = 0; i < n; i++) {
            points[i][0] = a[i];
            points[i][1] = a[n+i];
            if (i) diff += abs(points[i][0] - points[i-1][0]) + abs(points[i][1] - points[i-1][1]); 
        }
        cout << "\n" << diff;
        for (int i = 0; i < n; i++) cout << "\n" << points[i][0] << " " << points[i][1];
    }
    return 0;
}