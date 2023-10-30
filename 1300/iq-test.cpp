#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, evenCount = 0, oddCount = 0, even, odd;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x%2) {
            oddCount++;
            if (oddCount == 1) odd = i+1;
        }
        else {
            evenCount++;
            if (evenCount == 1) even = i+1;
        }
    }
    if (evenCount == 1) cout << even;
    else cout << odd;
    return 0;
}