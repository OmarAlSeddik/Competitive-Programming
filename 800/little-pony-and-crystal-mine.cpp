#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= abs(n/2-i) && j < n-abs(n/2-i)) cout << "D";
            else cout << "*";
        }
        cout << "\n";
    }
    return 0;
}