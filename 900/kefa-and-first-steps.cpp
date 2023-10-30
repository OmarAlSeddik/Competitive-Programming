#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, count = 1, max = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i && a[i] >= a[i-1]) count++;
        if (i && a[i] < a[i-1]) count = 1;
        if (count > max) max = count;
    }
    cout << max;
    return 0;
}