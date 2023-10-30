#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n * 2 + 1; i++) {
        for (int j = 0; j < n * 2 + 1 - abs(i - n); j++) {
            if (j < abs(i - n)) cout << " " << " ";
            else {
                if (j == n * 2 - abs(i - n)) {
                    cout << n - abs(j - n) - abs(i - n); 
                }
                else cout << n - abs(j - n) - abs(i - n) << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}