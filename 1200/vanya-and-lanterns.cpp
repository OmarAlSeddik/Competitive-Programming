#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, l;
    double r;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i < n; i++) {
        if (!i) r = a[i];
        else {
            double current = (double) (a[i]-a[i-1])/2;
            if (current > r) r = current;
        }
        if (i == n-1) {
            int toFinish = l-a[i];
            if (r < toFinish) r = toFinish;
        }
    }
    cout << fixed << r;
    return 0;
}