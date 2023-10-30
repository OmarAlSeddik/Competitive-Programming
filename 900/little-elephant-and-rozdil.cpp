#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, index, value;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (i == 0 || x < value) {
            index = i + 1;
            value = x;
        } else if (x == value) {
            index = 0;
        }
    }

    index ? cout << index : cout << "Still Rozdil";
    return 0;
}