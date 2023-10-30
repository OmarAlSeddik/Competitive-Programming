#include <bits/stdc++.h>
using namespace std;

int main() {
    char matrix[9];
    for (int i = 0; i < 9; i++) cin >> matrix[i];
    for (int i = 0; i < 9; i++) {
        if (matrix[i] != matrix[8-i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}